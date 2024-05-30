/*
 * Teacher.h
 *
 *  Created on: May 29, 2024
 *      Author: LENOVO
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include <iostream>
#include <string>

using namespace std;

class Teacher {
private:
    int id;
    string name;
    string subject;

public:
    Teacher(int id, const string& name, const string& subject);

    void displayDetails() const;

    int getId() const;
    const string& getName() const;
    const string& getSubject() const;

    void setName(const string& newName);
    void setSubject(const string& newSubject);
};

#endif /* TEACHER_H_ */
