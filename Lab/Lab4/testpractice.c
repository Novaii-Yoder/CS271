// CS 271 - Lab 4
// Program Name:    testpractice.c
// Author:          Jacob Yoder
// Date:            2/14/22
// Purpose: tests all the functions for lab 4

#include <stdio.h>
#include "practice.h"

int main (void) {
    printf("Testing the bmi function.\n\n");
    
    double weight, height;
    printf("Please enter the person's weight(-1 to exit): ");
    scanf("%lf", &weight);
    
    while (weight != -1) {
        printf("Please enter the person's height in inches: ");
        scanf("%lf", &height);
        
        printf("This person's bmi is %7.1lf\n", bmi(weight, height));
        
        printf("Please enter the person's weight in pounds(-1 to exit): ");
        scanf("%lf", &weight);
    } // end of while (bmi)
    
    printf("Testing the triangle function.\n\n");
    
    printf("Enter the number of lines for the" 
                " triangle function (negative to exit): ");
    int lines;
    scanf("%d", &lines);
    
    while (lines > 0) {
        triangle(lines);
        printf("Enter the number of lines for the" 
                " triangle function (negative to exit): ");
        scanf("%d", &lines);
    } // end of while (triangle)
    
    printf("Testing the duplicates function.\n\n");
    
    printf("Please enter the size of the array: ");
    int size;
    scanf("%d", &size);
    
    int array[size];
    printf("Enter the numbers in the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("There are %d duplicates in the array.\n", duplicates(array, size));
    
} // end of main
