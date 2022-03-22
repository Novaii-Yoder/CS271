// CS 271 - PA 8
// Program Name:    Employee.cpp
// Author:          Jacob Yoder
// Date:            3/22/22
// Purpose: Function and class definition for PA8

#include <string>
#include "Employee.h"

Employee::Employee(string f, string l, float s) {
    setFirstName(f);
    setLastName(l);
    setMonthlySalary(s);
} // end of Employee constructor

string Employee::getFirstName() const {
    return firstName;
} // end of getFirstName

string Employee::getLastName() const {
    return lastName;
} // end of getLastName

float Employee::getMonthlySalary() const {
    return monthlySalary;
} // end of getMonthlySalary

void Employee::setFirstName(string f) {
    firstName = f;
} // end of setFirstName

void Employee::setLastName(string l) {
    lastName = l;
} // end of setLastName

void Employee::setMonthlySalary(float s){
    if (s < 0)
        monthlySalary = 0;
    else
        monthlySalary = s;
} // end of setMonthlySalary
