/*
 * Student.cpp
 *
 *  Created on: May 29, 2024
 *      Author: LENOVO
 */

#include "../include/Student.h"

Student::Student(int id, const string& name, int age, const string& classAssigned)
    : id(id), name(name), age(age), classAssigned(classAssigned) {}

void Student::displayDetails() const {
    cout << "ID: " << id << "\tName: " << name << "\tAge: " << age << "\tClass: " << classAssigned << endl;
}

int Student::getId() const {
    return id;
}

const string& Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

const string& Student::getClassAssigned() const {
    return classAssigned;
}

void Student::setName(const string& newName) {
    name = newName;
}

void Student::setAge(int newAge) {
    age = newAge;
}

void Student::setClassAssigned(const string& newClassAssigned) {
    classAssigned = newClassAssigned;
}
