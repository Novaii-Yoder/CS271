// CS 271 - PA 5
// Program Name:    functionsPA5.c
// Author:          Jacob Yoder
// Date:            2/16/22
// Purpose: PA 5 function definitions

#include <stdio.h>
#include "functionsPA5.h"

// Prints an int array with specific fieldWidth and elemsPerLine
void printIntArray (int array[], int size, int fieldWidth, int elemsPerLine) {
    for (int i = 0; i < size; i++) {
        if (i % elemsPerLine == 0 && i != 0)
            printf("\n");
        printf("%*d", fieldWidth, array[i]);
    } // end of for
    printf("\n");
} // end of printIntArray

// Prints an char array with specific fieldWidth and elemsPerLine
void printCharArray (char array[], int size, int fieldWidth, int elemsPerLine) {
    for (int i = 0; i < size; i++) {
        if (i % elemsPerLine == 0 && i != 0)
            printf("\n");
        printf("%*c", fieldWidth, array[i]);
    } // end of for
    printf("\n");
} // end of printCharArray

// Finds the smallest number in an array and returns it
int arrayMin (int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++)
        if (array[i] < min)
            min = array[i];
    return min;
} // end of arrayMin

// Counts the letters in an array and returns it
int countLetters (char array[], int size) {
    int numLetters = 0;
    for (int i = 0; i < size; i++)
        if ((array[i] >= 'A' && array[i] >= 'Z') ||
                (array[i] >= 'a' && array[i] >= 'z'))
            numLetters++;
    return numLetters;
} // end of countLetters

// Finds the number of matches in two equal sized arrays and returns it
int numMatches (int array1[], int array2[], int size) {
    int numMatches = 0;
    for (int i = 0; i < size; i++)
        if (array1[i] == array2[i])
            numMatches++;
    return numMatches;
} // end of numMatches
