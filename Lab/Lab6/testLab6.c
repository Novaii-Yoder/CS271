// CS 271 - Lab 6
// Program Name:    testLab6.c
// Author:          Jacob Yoder
// Date:            2/28/22
// Purpose: Main function for lab 6

#include <stdio.h>
#include <ctype.h>
#include "letters.h"

int main (void) {
    // initializes all variables
    char bigArray[10000];
    char line[100];
    int countArray[26];
    int numLines = 0, totalLetters = 0;
    
    // grabs the first line of the file
    fgets(line, 100, stdin);
    
    // loops until end of file
    while (!feof(stdin)) {
        int i = 0;
        // goes through every element in line and adds it to
        // bigArray if it is a letter
        while (line[i] != '\n') {
            if (isalpha(line[i]) && totalLetters < 10000) {
                bigArray[totalLetters] = line[i];
                totalLetters++;
            } // end of if
            i++;
        } // end of while
        numLines++;
        fgets(line, 100, stdin);
    } // end of while

    // marks the end of bigArray
    bigArray[totalLetters] = '\0';
    
    // calls our functions
    letterCounts(bigArray, countArray);
    
    printLetterTable(countArray);
} // end of main
