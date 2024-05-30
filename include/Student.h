/*
 * Student.h
 *
 *  Created on: May 29, 2024
 *      Author: LENOVO
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string classAssigned;

public:
    Student(int id, const string& name, int age, const string& classAssigned);

    void displayDetails() const;

    int getId() const;
    const string& getName() const;
    int getAge() const;
    const string& getClassAssigned() const;

    void setName(const string& newName);
    void setAge(int newAge);
    void setClassAssigned(const string& newClassAssigned);
};

#endif /* STUDENT_H_ */
