// CS 271 - Assignment 1
// Program Name: calls.c
// Author: Jacob Yoder
// Date: 1/20/2022
// Purpose: Calculates the total number of calls, aswell as average, min, and max call lengths.

#include <stdio.h>
#include <math.h>
int main (void) {
    // initializes all variables and sets nextCall to the next input
    int nextCall, maxCall = 0, minCall = 0, totalCalls = 0;
    float totalCallLengths = 0.0;
    scanf("%d", &nextCall);

    // simple while loop togo through all the inputs
    while (nextCall != -1) {
        totalCalls++;
        totalCallLengths += nextCall;

        // if else block to determine if maxCall/minCall need to be updated
        if (totalCalls == 1) {
            maxCall = nextCall;
            minCall = nextCall;
        } // end if
        else if (nextCall > maxCall) {
            maxCall = nextCall;
        } // end else if
        else if (nextCall < minCall) {
            minCall = nextCall;
        } // end else if

        scanf("%d", &nextCall);
    } // end while

    // formatted print statements
    printf("Total Number of Calls %9d\n", totalCalls);
    printf("Average Call Length   %9.1f seconds\n", totalCallLengths / totalCalls);
    printf("Minimum Call Length   %9d seconds\n", minCall);
    printf("Maximum Call Length   %9d seconds\n", maxCall);



}// end of main
