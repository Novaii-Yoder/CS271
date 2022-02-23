// CS 271 - Lab 5
// Program name:    eventSchedule.c
// Author:          Jacob Yoder
// Date:            2/21/22
// Purpose: Function definitions for Lab 5

#include <stdio.h>
#include <string.h>
#include "planning.h"

void displayEvent ( Event e ) {

   unsigned int hr, min, day, month, year;
   printf("%-30s", e.name);

   // converts hour to a printable format and prints it
   hr = e.eventTime.hour;
   hr = ( hr > 12 ? hr - 12 : ( hr == 0 ? 12 : hr ) );
   printf("%s%d:", ( hr < 10 ? "0" : "" ), hr);

   // converts min to a printable format and prints it
   min = e.eventTime.minute;
   printf("%s%d %s ", ( min < 10 ? "0" : "" ), min, (hr < 12 ? "am" : "pm"));
   
   // converts the date into a mm/dd/yyyy format and prints it
   day = e.eventDate.day;
   month = e.eventDate.month;
   year = e.eventDate.year;
   printf("%s%d/%s%d/%d\n", ( month < 10 ? "0" : "" ), month, (day < 10 ? "0" : ""), day, year);
 } // end displayEvent function


