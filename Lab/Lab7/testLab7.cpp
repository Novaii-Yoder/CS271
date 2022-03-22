// CS 271 - Lab 7
// Program Name:    testLab7.cpp
// Author:          Jacob Yoder
// Date:            3/21/22
// Purpose: Main function for lab 7

#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"

int main() {
    string name;
    float balance;
    
    cout << "Grabbing name and balance from the .txt file" << endl;
    getline(cin, name);
    cin >> balance;
    
    cout << "Creating new SavingsAccount" << endl;
    SavingsAccount acc1(name, balance);
    
    // diplays the SavingsAccount then changes the name and balance to a hard
    // coded one. Displays, applies monthly interest and displays again
    acc1.display();
    
    cout << "Changing the name and balance to a hard coded set" << endl;
    acc1.setName("Lemon Head");
    acc1.setBalance(0.24);
    acc1.display();
    
    cout << "Applying monthly interest, with an annual interest of 2.5%" << endl;
    acc1.applyMonthlyInterest(0.025);
    acc1.display();
    
    // removes new line character after calling cin >> balance
    getline(cin, name);
    
    cout << "Getting new name and balance from file" << endl;
    getline(cin, name);
    cin >> balance;
    
    cout << "Creating new SavingsAccount" << endl;
    SavingsAccount acc2(name, balance);
    acc2.display();
    
    cout << "Applying monthly interest, with annual interest of 2.5% two times"
         << endl;
    acc2.applyMonthlyInterest(0.025);
    acc2.display();
    acc2.applyMonthlyInterest(0.025);
    acc2.display();
    
    cout << "Trying to change balance to -1241.99, should output 0" << endl;
    acc2.setBalance(-1241.99);
    acc2.display();
    
    cout << "Trying to change balance to 0, should output 0" << endl;
    acc2.setBalance(0);
    acc2.display();
} // end of main
