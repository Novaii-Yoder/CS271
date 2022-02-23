// CS 271 - Lab 4
// Program Name:    practice.c
// Author:          Jacob Yoder
// Date:            2/14/22
// Purpose: lab 4 function definitions 

#include <stdio.h>
#include "practice.h"

double bmi (double weight, double height) {
    // make sure values are reasonable
    if (weight <= 0 || height <= 0)
        return 0.0;
    return (weight * 703)/(height * height);
} // end of bmi

void triangle (int lines) {
    // fail case
    if (lines <= 0)
        return;
    // base case
    if (lines == 1) {
        printf("*\n");
        return;
    } // end of if
    
    // recursive case
    for (int i = 1; i <= lines; i++)
        printf("*");
    printf("\n");
    triangle(lines - 1);
} // end of triangle

int duplicates (int array[], int size) {
    // initializes dupCount and a second array to hold the found duplicates
    int dupCount = 0;
    double array2[size / 2];
    
    // fills array2 with numbers that are never going to be entered by the user
    for (int i = 0; i < size / 2; i++)
        array2[i] = 0.5;
    
    // loops through all values in the original array
    for (int i = 0; i < size; i++) {
        int numCount = 0;
        int inArray2 = 0;
        
        // compares all values in the array to the current position
        for (int j = i; j < size; j++)
            if (array[i] == array[j])
                numCount++;
            
        // tests to see if current number is within the found duplicates
        for (int j = 0; j < size / 2; j++)
            if ((double)array[i] == array2[j])
                inArray2 = 1;
        // if found a duplicate and duplicate isnt in the found duplicate array
        if (numCount > 1 && inArray2 == 0) {
            array2[dupCount] = (double)array[i];
            dupCount++;
        } // end of if
    } // end of outer for
    
    return dupCount;
} // end of duplicates
