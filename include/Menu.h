/*
 * Menu.h
 *
 *  Created on: May 29, 2024
 *      Author: LENOVO
 */

#ifndef MENU_H_
#define MENU_H_

#include <vector>
#include "../include/Student.h"
#include "../include/Teacher.h"

using namespace std;

void displayMainMenu();
void handleStudentMenu(vector<Student>& students);
void handleTeacherMenu(vector<Teacher>& teachers);




#endif /* MENU_H_ */
