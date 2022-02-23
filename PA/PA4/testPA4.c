// CS 271 - PA 4
// Program Name:    testPA4.c
// Author:          Jacob Yoder
// Date:            2/7/22
// Purpose: test program for PA 4
#include <stdio.h>
#include <math.h>

#include "functionsPA4.h"

int main( void ) {

    int size, prime;

    // Input an integer.  This is the size of the array.
    scanf("%d", &size);
    // Create an array using the input value as the number of elements.
    int array[size];

    // Loop to input the elements of the array.
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);


    printf("There are %d elements in the array.\n", size);
    // Call arrayAverage. Display the average using %7.2lf as the placeholder.
    printf("The average is%7.2lf.\n", arrayAverage(array, size));

    // Use a sentinel loop to input integers and test for prime / not prime
    scanf("%d", &prime);
    while (!feof(stdin)) {
        // The sentinel loop repeats until the end of file is reached.
        if (isPrime(prime))
            printf("%d is prime\n", prime);
        else
            printf("%d is not prime\n", prime);
        scanf("%d", &prime);
    }// end of while

} // end of main
