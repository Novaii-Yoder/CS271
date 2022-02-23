// CS 271 - PA 4
// Program Name:    functionsPA4.c
// Author:          Jacob Yoder
// Date:            2/7/22
// Purpose: PA 4 function definitions

#include <stdio.h>
#include <math.h>

#include "functionsPA4.h"

// returns average value of the indexes of the array
double arrayAverage (int array[], int length) {
    double total = 0.0;
    // adds together all indexes of array
    for (int i = 0; i < length; i ++)
        total += array[i];

    return total / length;
} // end of arrayAverage

// returns weather or not a number is prime or not
int isPrime (int num) {
    // initializes upperLimit to sqare root of the input
    int upperLimit = (int) sqrt(num);
    if (num == 0 || num == 1)
        return 0;
    // loops through all numbers 2 to upperLimit to determine if it is prime
    for (int i = 2; i <= upperLimit; i++) {
        if (num % i == 0)
            return 0;
    } // end of for

    return 1;
} // end of isPrime



