#include <stdio.h>
#include <math.h>

    // CS 271 - Lab 1
    // Program Name:    Coffee
    // Author:          Jacob Yoder
    // Date:            1/24/2022
    // Purpose: Find max and min from a set of coffee prices over the
    //            last year.
    
int main (void) {
    
    // initializes some variables
    double max, min, currentPrice;
    int maxMonth, minMonth, currentMonth;
    
    // gets initial input and sets the min and max to them. Without a prompt.
    scanf("%d", &currentMonth);
    scanf("%lf", &currentPrice);
    max = currentPrice;
    min = currentPrice;
    maxMonth = currentMonth;
    minMonth = currentMonth;
    
    // for loop to collect rest of 11 month's data
    for (int i = 0; i < 11; i++) {
        
        // gets input without a prompt
        scanf("%d", &currentMonth);
        scanf("%lf", &currentPrice);
        
        // processess input
        if (currentPrice > max) {
            max = currentPrice;
            maxMonth = currentMonth;
        } //end of if
        if (currentPrice < min) {
            min = currentPrice;
            minMonth = currentMonth;
        } // end of if
    } // end of for
    
    // prints the minimum price and the corresponding month
    printf("Minimum Price $%7.2f   ", min);
    switch(minMonth) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("Febuary\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid Month Input\n");
    } // end of switch
     
    // prints the maximum price and the corresponding month
    printf("Maximum Price $%7.2f   ", max);
    switch(maxMonth) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("Febuary\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid Month Input\n");
            
    } // end of switch
    
} // end of main
