// CS 271           Lab 2
// Program Name:    triples.c
// Author:          Jacob Yoder
// Date:            1/31/22
// Purpose: to sort a set of data into alpha characters and then
//          find all the sets of ordered triples within the data.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void) {
    // creates and array of chars and fills it with the input
    char line[80];
    fgets(line, 80, stdin);
   
    // while loop to go through the input line by line
    while (!feof(stdin)) {
        // initializes 2 ints to keep track of position while sorting line[]
        int source = 0;
        int dest = 0;
        
        printf("Original line:  %s\n", line);
        
        // while loop to filter out non-alpha characters
        while (line[dest] != '\0') {
            if (!(isalpha(line[source])||line[source]=='\0')) {
                source++;
            }// end of if
            else {
                line[dest] = line[source];
                if (line[dest] != '\0') {
                    source++;
                    dest++;
                }// end of if
            }// end of else
        }// end of while
        
        printf("Only letters:   %s\n", line);
        printf("Triples found:\n");
        
        // for loop to find any consecutive triples
        for (int i = 0; i < (dest - 2); i++) {
            if (((line[i] + 2) == (line[i + 1] + 1)) && ((line[i] + 2) == (line[i + 2]))) {
               printf("%c%c%c\n", line[i], line[i + 1], line[i + 2]); 
            }
        }
        
        
        fgets(line, 80, stdin);
    }// end of while
    
}// end of main
