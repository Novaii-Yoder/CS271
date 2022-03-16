// CS 271 - PA 7
// Program Name:    wordFun.cpp
// Author:          Jacob Yoder
// Date:            3/15/22
// Purpose: PA 7 main function for wordFun
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main( ) {
    // initializes the used variables
   string array[25];
   int i = 0;

   // loops until end of file or array is filled
   while (!cin.eof() && i < 25) {
       getline(cin, array[i]);
       i++;
   } // end of while

   // loops through all the lines saved to the array
   for (int j = 0; j < i - 1; j++) {
       // prints the string
       cout << array[j] << endl;

       // prints each character in the string
       for (int l = 0; l < array[j].length(); l++)
           cout << array[j][l] << endl;
   } // end of for

} // end main


   


