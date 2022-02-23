// CS 271 - PA 5
// Program Name:    functionsPA5.h
// Author:          Jacob Yoder
// Date:            2/16/22
// Purpose: PA 5 function prototypes

#ifndef FUNCTIONSPA5_H
#define FUNCTIONSPA5_H

// Prints an int array with specific field width and elements per line
void printIntArray (int[], int, int, int);

// Prints an char array with specific field width and elements per line
void printCharArray (char[], int, int, int);

// Finds the smallest number in an array of ints and returns it
int arrayMin (int[], int);

// Finds the number of letters in an array of chars and returns it
int countLetters (char[], int);

// Finds the number of matches between two equal sized arrays and returns it
int numMatches (int[], int[], int);

#endif
