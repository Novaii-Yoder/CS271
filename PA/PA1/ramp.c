// CS 271 - Assignment 1
// Program Name: ramp.c
// Author: Jacob Yoder
// Date: 1/20/2022 
// Purpose: Calculates the length of a ramp based on the given rise.
#include <stdio.h>
#include <math.h>

int main (void) {
    double rise, run, riseft, rampLength;
    
    printf("Input the rise (in inches): ");
    scanf("%lf", &rise);
    
    if((rise * 12.0 ) >= (30.0 * 12) ) {
        printf("The ramp requires a landing.\n");
    }//end of if
    
    riseft = (rise / 12.0);
    run = (riseft * 12.0);
    rampLength = sqrt(riseft * riseft + run * run);
    
    printf("Horizontal Distance: %.1f feet\nRamp Length: %.1f feet\n", run, rampLength);
    
    
}//end of main
