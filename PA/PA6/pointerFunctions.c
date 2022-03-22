// CS 271 - PA 6
// Program Name:    pointerFunctions.c
// Author:          Jacob Yoder
// Date:            2/21/22
// Purpose: PA 6 function definitions
#include <stdio.h>
#include "pointerFunctions.h"
#include <ctype.h>

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

// reverses the order of elements in an int array
void reverse (int* aPtr, int size){
    // swaps the first element with the last, then, the second
    // with the second to last and ect.
    for (int i = 0; i < size / 2; i++) {
        int temp = aPtr[i];
        aPtr[i] = aPtr[size - i - 1];
        aPtr[size - i - 1] = temp;
    } // end of for
} // end of reverse

// slides all capital letters to the front of the array
void slide (char* cPtr, int size) {
    // loops through the entire array the number of times as it has elements
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            // looks for when the first element of a pair is lower and the
            // second element is upper then swaps their places
            if (islower(cPtr[j]) && isupper(cPtr[j + 1])) {
                char temp = cPtr[j];
                cPtr[j] = cPtr[j + 1];
                cPtr[j + 1] = temp;
            } // end of if
        } // end of for
    } // end of for
} // end of slide
