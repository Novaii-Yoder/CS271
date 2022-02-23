// CS 271 - Lab 5
// Program name:    eventSchedule.c
// Author:          Jacob Yoder
// Date:            2/21/22
// Purpose: Main function for Lab 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "planning.h"


int main (void) {
    int numEvents;
    Event* ePtr;
    printf("How many events do you want to enter?");
    scanf("%d",&numEvents);
    // dummy array to collect the users extra \n characters from scanf
    char dummy[30];
    
    // allocates memory for all the Events being created
    ePtr = (Event*)malloc(sizeof(Event) * numEvents);
    
    // loops through all the events
    for (int i = 0; i < numEvents; i++){
        // collects the garbage \n
        fgets(dummy, 30, stdin);
        
        printf("What is the name of the event %d?\n", i + 1);
        fgets(ePtr[i].name, 30, stdin);
        
        // deletes garbage \n at end of ePtr.name
        ePtr[i].name[strlen(ePtr[i].name) - 1] = '\0';
        
        printf("What is the month, day, and year of the event?(seperate answers with spaces)\n");
        scanf("%d %d %d", &ePtr[i].eventDate.month, &ePtr[i].eventDate.day, &ePtr[i].eventDate.year);
        
        printf("What is the time of the event?(hour min, seperated by a space)\n");
        scanf("%d %d", &ePtr[i].eventTime.hour, &ePtr[i].eventTime.minute);
        
    } // end of for
    
    // prints all events
    for (int z = 0; z < numEvents; z++)
        displayEvent(ePtr[z]);
    
    // swaps first and last event
    Event temp = ePtr[0];
    ePtr[0] = ePtr[numEvents - 1];
    ePtr[numEvents - 1] = temp;
    printf("\n");
    
    // prints all events
    for (int z = 0; z < numEvents; z++)
        displayEvent(ePtr[z]);
    
    // frees the allocated memory
    free(ePtr);
} // end of main
