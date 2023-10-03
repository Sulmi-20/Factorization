/* C program by Areli for CS1310 Aug 2023
 *
 *  calculate distance given rate and time
     		
     __         -----  ----
    / ---      ( (0) |/(0)  )
         __    \____/U\____/
      \\\\/
        L\           ||
         \\ _ _ _ _ | || _ _ _ _ 
          \\| ___ | [ ] __/___ |\-|
           \| ---          --- |/-|
            | *   ||| ||  \--- |_
        ____|    *|[][ ] ---   |__
      || AMM|     AAMM___[ ]__ |A M\
      || AMM|=O          O | = | AMM|
      \L AMM|                 \| AMM|   ___))
 */ 
#include <stdio.h>


void main (void)
{
	
 double rate, time, distance; /* rate in mph, time in hours; d= mph*hours */
 
 printf ("The program calculates the distance you will go. \n\n");
 rate = 65.0;
 time = 5.0;
 distance = rate * time;
 
 printf("You went %.4lf miles at %.2lf mph for %.2lf hours. \n\n",
          distance, rate, time);
	
}













