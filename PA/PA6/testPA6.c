// CS 271 - PA 6
// Program Name:    testPA6.c
// Author:          Jacob Yoder
// Date:            2/21/22
// Purpose: PA 6 main function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pointerFunctions.h"

int main (void){
    int nums[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    char text[] = {'H','e','L','L','o','W','o','R','l','D'};

    printf("Created two arrays to test reverse() and slide()\n");
    printf("Array 1:\n");
    printIntArray(nums, 20, 3, 10);
    printf("Array 2:\n");
    printCharArray(text, 10, 2, 5);


    reverse(nums, 20);
    slide(text, 10);

    printf("Array 1 after calling reverse()\n");
    printIntArray(nums, 20, 3, 10);
    printf("Array 2 after calling slide()\n");
    printCharArray(text, 10, 2, 5);

    printf("Creating 2 new arrays that are empty to test\n");

    int nums2[] = {};
    char text2[] = {};

    printf("Array 1:\n");
    printIntArray(nums2, 0, 3, 10);
    printf("Array 2:\n");
    printCharArray(text2, 0, 2, 5);


    reverse(nums2, 0);
    slide(text2, 0);

    printf("Array 1 after calling reverse()\n");
    printIntArray(nums2, 0, 3, 10);
    printf("Array 2 after calling slide()\n");
    printCharArray(text2, 0, 2, 5);

    printf("Creating 2 new arrays that are randomly filled to test\n");

    int nums3[100];
    char text3[100];

    // fills the 2 random arrays with random ints and chars respectively
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        nums3[i] = rand() % 100;
        if (rand() % 2) {
            text3[i] = rand() % ('z' - 'a' + 1) + 'a';
        } else {
            text3[i] = rand() % ('Z' - 'A' + 1) + 'A';
        } // end of if else
    } // end of for

    printf("Array 1:\n");
    printIntArray(nums3, 100, 3, 20);
    printf("Array 2:\n");
    printCharArray(text3, 100, 2, 25);

    reverse(nums3, 100);
    slide(text3, 100);

    printf("Array 1 after calling reverse()\n");
    printIntArray(nums3, 100, 3, 20);
    printf("Array 2 after calling slide()\n");
    printCharArray(text3, 100, 2, 25);

    printf("Creating 2 new arrays that have 1 element to test\n");

    int nums4[] = {25};
    char text4[] = {'x'};

    printf("Array 1:\n");
    printIntArray(nums4, 1, 3, 20);
    printf("Array 2:\n");
    printCharArray(text4, 1, 2, 25);

    reverse(nums4, 1);
    slide(text4, 1);

    printf("Array 1 after calling reverse()\n");
    printIntArray(nums4, 1, 3, 20);
    printf("Array 2 after calling slide()\n");
    printCharArray(text4, 1, 2, 25);
} // end of main
