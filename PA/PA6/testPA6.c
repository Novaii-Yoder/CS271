// CS 271 - PA 6
// Program Name:    testPA6.c
// Author:          Jacob Yoder
// Date:            2/21/22
// Purpose: PA 6 main function

#include <stdio.h>
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

} // end of main
