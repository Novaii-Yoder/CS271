// CS 271 - Lab 7
// Program Name:    savingsAccount.cpp
// Author:          Jacob Yoder
// Date:            3/21/22
// Purpose: Function definitions for lab 7

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Employee.h"

int main() {

    cout << "Attempting to create two Employee Objects" << endl;

    Employee e1("John", "Johnson", 2500.21);
    Employee e2("Bill", "Gates", 9500.25);

    cout << e1.getFirstName() << " " << e1.getLastName() << ", " << e1.getMonthlySalary() << endl;
    cout << e2.getFirstName() << " " << e2.getLastName() << ", " << e2.getMonthlySalary() << endl;

    cout << "Changing the first Employee's first and last name to user input" << endl;
    cout << "Please enter a first name: " << endl;
    string name;
    getline(cin, name);
    e1.setFirstName(name);
    cout << "Please enter a last name: " << endl;
    getline(cin, name);
    e1.setLastName(name);

    cout << e1.getFirstName() << " " << e1.getLastName() << ", " << e1.getMonthlySalary() << endl;
    cout << e2.getFirstName() << " " << e2.getLastName() << ", " << e2.getMonthlySalary() << endl;

    cout << "Changing the first Employee's salary to user input" << endl;
    cout << "Please enter a salary: " << endl;
    int salary;
    cin >> salary;
    e1.setMonthlySalary(salary);

    cout << "Changing all of the second Employee's info and putting a negative salary" << endl;

    e2.setFirstName("Every");
    e2.setLastName("Student");
    e2.setMonthlySalary(-12313);

    cout << e1.getFirstName() << " " << e1.getLastName() << ", " << e1.getMonthlySalary() << endl;
    cout << e2.getFirstName() << " " << e2.getLastName() << ", " << e2.getMonthlySalary() << endl;

    cout << "Changing all of the second Employee's info" << endl;

    e2.setFirstName("Norman");
    e2.setLastName("Whittaker");
    e2.setMonthlySalary(80000);

    cout << e1.getFirstName() << " " << e1.getLastName() << ", " << e1.getMonthlySalary() << endl;
    cout << e2.getFirstName() << " " << e2.getLastName() << ", " << e2.getMonthlySalary() << endl;

    cout << "Giving all Employee's a 10% raise!" << endl;

    e1.setMonthlySalary(trunc(e1.getMonthlySalary() * 1.1 * 100) / 100);
    e2.setMonthlySalary(trunc(e2.getMonthlySalary() * 1.1 * 100) / 100);

    cout << e1.getFirstName() << " " << e1.getLastName() << ", " << e1.getMonthlySalary() << endl;
    cout << e2.getFirstName() << " " << e2.getLastName() << ", " << e2.getMonthlySalary() << endl;
} // end of main

