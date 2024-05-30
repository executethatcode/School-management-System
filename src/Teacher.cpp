/*
 * Teacher.cpp
 *
 *  Created on: May 29, 2024
 *      Author: LENOVO
 */

#include "../include/Teacher.h"

Teacher::Teacher(int id, const string& name, const string& subject)
    : id(id), name(name), subject(subject) {}

void Teacher::displayDetails() const {
    cout << "ID: " << id ;
    cout << "\tName: " << name ;
    cout << "\tSubject: " << subject<<endl ;
}

int Teacher::getId() const {
    return id;
}

const string& Teacher::getName() const {
    return name;
}

const string& Teacher::getSubject() const {
    return subject;
}

void Teacher::setName(const string& newName) {
    name = newName;
}

void Teacher::setSubject(const string& newSubject) {
    subject = newSubject;
}
