// CS 271 - Lab 3
// Program Name:    functions3.h
// Author:          Jacob Yoder
// Date:            2/7/22
// Purpose: lab 3 function definitions

#include <stdio.h>
#include <math.h>

#include "functions3.h"

// write function definition here
double valueOfPi (int numTerms) {
    double piEst = 0.0;
    
    // if numterms is 0 returns 0.0 otherwise calculates piEst
    if (numTerms <= 0) 
        return 0.0;
    for (int i = 0; i < numTerms; i++) 
        piEst += (pow(-1.0, i) * (4.0 / (1.0 + ((double)i * 2.0))));
} // end of valueOfPi



