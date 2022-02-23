// CS 271 - PA 5
// Program Name:    testPA5.c
// Author:          Jacob Yoder
// Date:            2/16/22
// Purpose: testing the PA 5 functions

#include <stdio.h>
#include "functionsPA5.h"
#include <stdlib.h>
#include <time.h>

int main (void) {
    srand(time(NULL));

    // Initializes the arrays for printIntArray
    int intArray1[] = {8,6,7,5,3,0,9};
    int intArray2[] = {10,9,3,1,10,4,7,8,1,2};
    int intArray3[100];

    // fills one of the arrays with random ints
    for (int i = 0; i < 100; i++)
        intArray3[i] = rand() % 100;

    printf("Testing printIntArray with a hard-coded array of size 7, "
            "field width of 12, and 4 elements perline.\n");
    printIntArray(intArray1, 7, 12, 4);

    printf("Testing printIntArray with a hard-coded array of size 10, "
            "field width of 4, and 5 elements perline.\n");
    printIntArray(intArray2, 10, 4, 5);

    printf("Testing printIntArray with a randomized array of size 100, "
            "field width of 3, and 10 elements perline.\n");
    printIntArray(intArray3, 100, 3, 10);


    printf("\nTesting arrayMin on the first array: min is %d \n",
           arrayMin(intArray1, 7));
    printf("Testing arrayMin on the second array: min is %d \n",
           arrayMin(intArray2, 10));
    printf("Testing arrayMin on the third array: min is %d \n",
           arrayMin(intArray3, 100));

    // Initializes the arrays for printCharArray
    char charArray1[] = {'a','b','c','d','e','f'};
    char charArray2[] = {'j','a','v','a',' ','i','s',' ','b','e','t','t','e','r'};
    char charArray3[100];

    // Fills one of the arrays with random chars
    for (int i = 0; i < 100; i++)
        charArray3[i] = rand() % 94 + 33;

    printf("\nTesting printCharArray with a hard-coded array of size 6, "
            "field width of 5, and 3 elements perline.\n");
    printCharArray(charArray1, 6, 5, 3);

    printf("Testing printCharArray with a hard-coded array of size 14, "
            "field width of 2, and 7 elements perline.\n");
    printCharArray(charArray2, 14, 2, 7);

    printf("Testing printCharArray with a randomized array of size 100, "
            "field width of 2, and 10 elements perline.\n");
    printCharArray(charArray3, 100, 2, 10);

    printf("Testing countLetters on the first array: %d letters found\n",
           countLetters(charArray1, 6));
    printf("Testing countLetters on the second array: %d letters found\n",
           countLetters(charArray2, 14));
    printf("Testing countLetters on the third array: %d letters found\n",
           countLetters(charArray3, 100));

    // Initializes the arrays for numMatches
    int matchedArray1[] = {1,2,3,4,5,6,7,8,9,10,11};
    int matchedArray2[] = {11,10,9,8,7,6,5,4,3,2,1};
    int matchedArray3[] = {11,10,9,8,7,6,7,8,9,10,9};

    // Diplays all the arrays for numMatches
    printf("\nArray 1: ");
    printIntArray(matchedArray1, 11, 3, 20);
    printf("Array 2: ");
    printIntArray(matchedArray2, 11, 3, 20);
    printf("Array 3: ");
    printIntArray(matchedArray3, 11, 3, 20);

    printf("Testing numMatches with array 1 and 2.\nExpected"
            " output is 1, actual output: %d\n",
            numMatches(matchedArray1, matchedArray2, 11));
    printf("Testing numMatches with array 2 and 3.\nExpected"
            " output is 6, actual output: %d\n",
            numMatches(matchedArray2, matchedArray3, 11));
    printf("Testing numMatches with array 1 and 3.\nExpected"
            " output is 5, actual output: %d\n",
            numMatches(matchedArray3, matchedArray1, 11));

} // end of main
