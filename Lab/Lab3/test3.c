// CS 271 - Lab 3
// Program Name:    test3.c
// Author:          Jacob Yoder
// Date:            2/7/22
// Purpose: test program for lab 3
#include <stdio.h>
#include <math.h>

#include "functions3.h"

int main( void ) {
    int input;
    scanf("%d", &input);
    // loops through every int untill end of file and calculates pi
    while (!feof(stdin)) {
        printf("Value of Pi with %d terms = %10.8f\n", 
               input, valueOfPi(input));
        scanf("%d", &input);
    }

} // end main
