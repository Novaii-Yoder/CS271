// CS 271 - Lab 6
// Program Name:    letters.c
// Author:          Jacob Yoder
// Date:            2/28/22
// Purpose: Function definitions for lab 6

#include <stdio.h>
#include "letters.h"

// count the number of each letter in an array of letters
void letterCounts (char* charArray, int* countArray) {
    for (int i = 0; i < 26; i++)
        countArray[i] = 0;
    int curr = 0;
    while (charArray[curr] != '\0') {
        for (int i = 0; i < 26; i++) {
            if (charArray[curr] == ('a' + i) || charArray[curr] == ('A' + i)) {
                countArray[i]++;
            } // end of if
        } // end of for
        curr++;
    } // end of while
} // end of letterCounts

// prints the number of each letter from a given in array
void printLetterTable (int* countArray) {
    printf("Letter  Count\n");
    printf("------  -----\n");
    for (int i = 0; i < 26; i++) {
        printf("%c or %c  %5i\n", 'A' + i, 'a' + i, countArray[i]);
    } // end of for
} // end of printLetterTable
