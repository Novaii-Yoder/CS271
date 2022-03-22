// CS 271 - PA 8
// Program Name:    Employee.h
// Author:          Jacob Yoder
// Date:            3/22/22
// Purpose: Function and class prototype for PA8

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string firstName;
    string lastName;
    float monthlySalary;

public:
    Employee(string, string, float);
    string getFirstName() const;
    string getLastName() const;
    float getMonthlySalary() const;
    void setFirstName(string);
    void setLastName(string);
    void setMonthlySalary(float);

}; // end of class Employee

#endif
