// CS 271 - Lab 5
// Program name:    planning.h
// Author:          Jacob Yoder
// Date:            2/21/22
// Purpose: Function prototypes and structures for Lab 5
#ifndef PLANNING_H
#define PLANNING_H

typedef struct date {

   unsigned int month;
   unsigned int day;
   unsigned int year;

} Date ;

typedef struct time {

   unsigned int hour;
   unsigned int minute;

} Time ;

typedef struct event {

   char name[30];
   Time eventTime;
   Date eventDate;

} Event ;

void displayEvent ( Event );



#endif
