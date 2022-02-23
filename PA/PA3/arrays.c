// CS 271           PA3
// Program Name:    arrays.c
// Author:          Jacob Yoder
// Date:            1/31/22
// Purpose: to create a random array of ints and letters, then sort 
//          out positive ints and capital letters respectively.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main (void) {
    // initializes and set some variables that will be used throughout the program
    int SIZE = 20;
    int SIZECHAR = 50;
    int randomInts[SIZE];
    char randomChar[SIZECHAR];
    int temp = 0;
    
    srand(time(NULL));
    printf("Problem 1\n");

    // fills the randomInts array with random ints [-20, 20]
    for (int i = 0; i < SIZE; i++) {
        randomInts[i] = rand() % 41 - 20;
    } // end of for
    printf("Array 1\n");

    // prints the array of numbers 10 a line with spacing of 4
    for (int i = 0; i < SIZE; i++) {
        
        if (i % 10 == 0 && i != 0) {
            printf("\n");
        }
        printf("%4d", randomInts[i]);
    }
    printf("\n\nOnly the positive values of Array 1\n");

    // prints just the positive numbers from the randomInts array
    for (int i = 0; i < SIZE; i++) {
        if (randomInts[i] > 0) {
            printf("%4d", randomInts[i]);
            temp++;
            if (temp % 10 == 0 && temp != 0) {
                printf("\n");
            } // end of if
        } // end of if
    } // end of for
    printf("\n\nProblem 2\n");
    temp = 0;

    // fills the randomChar array with random letters [a. Z]
    for (int i = 0; i < SIZECHAR; i++) {
        int tempChar = 0;
        tempChar = rand() % ('z' - 'A' + 1) + 'A';
        while ((tempChar > 'Z' && tempChar < 'a')) {
            tempChar = rand() % ('z' - 'A' + 1) + 'A';;
        } // end of while
        randomChar[i] = tempChar;
    } // end of for
    printf("Array 2\n");

    // prints the character array
    for (int i = 0; i < SIZECHAR; i++) {

        printf("%c", toascii(randomChar[i]));
    }
    printf("\n\nOnly the uppercase letters in Array 2\n");

    // prints capital letters from the array
    for (int i = 0; i < SIZECHAR; i++) {
        if (randomChar[i] >= 'A' && randomChar[i] <= 'Z') {
            printf("%c ", randomChar[i]);
            temp++;
            if (temp % 10 == 0 && temp != 0) {
                printf("\n");
            } // end of if
        } // end of if
    } // end of for
    printf("\n");
} // end of main
