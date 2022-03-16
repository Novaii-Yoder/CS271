// CS 271 - PA 7
// Program Name:    logTable.cpp
// Author:          Jacob Yoder
// Date:            3/15/22
// Purpose: PA 7 main function for logTable
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;
int main() {
    // prints the header
    cout << "Number   Log base 2   Log base 10  Log base e " << endl;

    // loops from 1-100 and prints the log2, log10, and loge of that number.
    for(int i = 1; i <= 100; i++) {
        cout << setw(4)  << i;
        cout << setw(5) << setprecision(3) << fixed << "        "
             << (double)log2(i) << "        " << (double)log10(i)
             << "        " << (double)log(i) << endl;
    } // end of for

} // end of main
