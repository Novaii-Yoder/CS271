// CS 271 - Lab 7
// Program Name:    savingsAccount.cpp
// Author:          Jacob Yoder
// Date:            3/21/22
// Purpose: Function definitions for lab 7

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount (string n, float b) {
    setName(n);
    setBalance(b);
} // end of constructor SavingsAccount

string SavingsAccount::getName() const{
    return name;
} // end of getName

float SavingsAccount::getBalance() const {
    return balance;
} // end of getBalance

void SavingsAccount::setName(string n) {
    name = n;
} // end of setName

void SavingsAccount::setBalance(float b) {
    if (b > 0)
        balance = b;
    else
        balance = 0;
} // end of setBalance

void SavingsAccount::applyMonthlyInterest(float i){
    i /= 12;
    setBalance(balance + (trunc(balance * i * 100) / 100));
} // end of applyMonthlyInterest

void SavingsAccount::display() {
    cout << "Customer Name:     " << name << endl;
    cout << "Current Balance:   $ " << balance << endl;
} // end of display
