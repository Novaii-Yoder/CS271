// CS 271 - Lab 7
// Program Name:    savingsAccount.h
// Author:          Jacob Yoder
// Date:            3/21/22
// Purpose: Function definitions for lab 7

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <string>
using namespace std;

class SavingsAccount {
private:
    string name;
    float balance;
    
public:
    SavingsAccount (string, float);
    string getName() const;
    float getBalance() const;
    void setName(string);
    void setBalance(float);
    void applyMonthlyInterest(float);
    void display();
    
}; // end of SavingsAccount

#endif
