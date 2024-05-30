/*
 * Menu.cpp
 *
 *  Created on: May 29, 2024
 *      Author: LENOVO
 */
#include "../include/Menu.h"
#include <iostream>
#include <vector>

using namespace std;

void displayMainMenu() {
    cout << "School Management System\n";
    cout << "1. Manage Students\n";
    cout << "2. Manage Teachers\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}


void handleStudentMenu(vector<Student>& students) {
    int choice;
    do {
    cout << "1. Add Student\n";
    cout << "2. Update Student\n";
    cout << "3. Delete Student\n";
    cout << "4. View Students\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int id, age;
        string name, classAssigned;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Class: ";
        cin >> classAssigned;
        students.push_back(Student(id, name, age, classAssigned));
    }

    else if (choice == 2) {
        int id, age;
        string name, classAssigned;
        for (int i = 0; i < students.size(); ++i) {
            students[i].displayDetails();
        }
        cout << "Enter ID of the student to update: ";
        cin >> id;
        bool found = false;
        for (int i = 0; i < students.size(); ++i) {
            if (students[i].getId() == id) {
                cout << "Enter New Name: ";
                cin >> name;
                cout << "Enter New Age: ";
                cin >> age;
                cout << "Enter New Class: ";
                cin >> classAssigned;
                students[i].setName(name);
                students[i].setAge(age);
                students[i].setClassAssigned(classAssigned);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student not found.\n";
        }
    } else if (choice == 3) {
        int id;
        for (int i = 0; i < students.size(); ++i) {
            students[i].displayDetails();
        }
        cout << "Enter ID of the student to delete: ";
        cin >> id;
        bool found = false;
        for (int i = 0; i < students.size(); ++i) {
            if (students[i].getId() == id) {
                students.erase(students.begin() + i);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student not found.\n";
        }
    } else if (choice == 4) {
        for (int i = 0; i < students.size(); ++i) {
            students[i].displayDetails();
        }
    }
    }while(choice!=5);
}


void handleTeacherMenu(vector<Teacher>& teachers) {
    int choice;
    do{
    cout << "1. Add Teacher\n";
    cout << "2. Update Teacher\n";
    cout << "3. Delete Teacher\n";
    cout << "4. View Teachers\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int id;
        string name, subject;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Subject: ";
        cin >> subject;
        teachers.push_back(Teacher(id, name, subject));
    }
    else if (choice == 2) {
        int id;
        string name, subject;
        for (int i = 0; i < teachers.size(); ++i) {
            teachers[i].displayDetails();
        }
        cout << "Enter ID of the teacher to update: ";
        cin >> id;
        bool found = false;
        for (int i = 0; i < teachers.size(); ++i) {
            if (teachers[i].getId() == id) {
                cout << "Enter New Name: ";
                cin >> name;
                cout << "Enter New Subject: ";
                cin >> subject;
                teachers[i].setName(name);
                teachers[i].setSubject(subject);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Teacher not found.\n";
        }
    } else if (choice == 3) {
        int id;
        for (int i = 0; i < teachers.size(); ++i) {
            teachers[i].displayDetails();
        }
        cout << "Enter ID of the teacher to delete: ";
        cin >> id;
        bool found = false;
        for (int i = 0; i < teachers.size(); ++i) {
            if (teachers[i].getId() == id) {
                teachers.erase(teachers.begin() + i);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Teacher not found.\n";
        }
    } else if (choice == 4) {
        for (int i = 0; i < teachers.size(); ++i) {
            teachers[i].displayDetails();
        }
    }
    }while(choice!=5);
}

