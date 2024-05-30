/*
 * main.cpp
 *
 *  Created on: May 29, 2024
 *      Author: LENOVO
 */
#include <iostream>
#include <fstream>
#include <vector>
#include "../include/Student.h"
#include "../include/Teacher.h"
#include "../include/Menu.h"

using namespace std;

void saveStudents(const vector<Student>& students) {
    ofstream file("students.txt");
    if (!file) {
        cout << "Error opening file for writing.\n";
        return;
    }
    for (const Student& student : students) {
        file << student.getId() << " " << student.getName() << " " << student.getAge() << " " << student.getClassAssigned() << endl;
    }
    file.close();
}

vector<Student> loadStudents() {
    vector<Student> students;
    ifstream file("students.txt");
    if (!file) {
        cout << "Error opening file for reading.\n";
        return students;
    }
    int id, age;
    string name, classAssigned;
    while (file >> id >> name >> age >> classAssigned) {
        students.push_back(Student(id, name, age, classAssigned));
    }
    file.close();
    return students;
}

void saveTeachers(const vector<Teacher>& teachers) {
    ofstream file("teachers.txt");
    if (!file) {
        cout << "Error opening file for writing.\n";
        return;
    }
    for (const Teacher& teacher : teachers) {
        file << teacher.getId() << " " << teacher.getName() << " " << teacher.getSubject() << endl;
    }
    file.close();
}

vector<Teacher> loadTeachers() {
    vector<Teacher> teachers;
    ifstream file("teachers.txt");
    if (!file) {
        cout << "Error opening file for reading.\n";
        return teachers;
    }
    int id;
    string name, subject;
    while (file >> id >> name >> subject) {
        teachers.push_back(Teacher(id, name, subject));
    }
    file.close();
    return teachers;
}

int main() {
    vector<Student> students = loadStudents();
    vector<Teacher> teachers = loadTeachers();


    int choice;
    while (true) {
        displayMainMenu();
        cin >> choice;

        if (choice == 1) {
            handleStudentMenu(students);
            saveStudents(students);
        } else if (choice == 2) {
            handleTeacherMenu(teachers);
            saveTeachers(teachers);
        } else if (choice == 3) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
