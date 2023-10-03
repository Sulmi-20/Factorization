/* C program by Areli Melchor CS1310 Sep 2023
 * find C given radius of circle
 */
#include<stdio.h>
#define pi 3.1416
double radius, C;   /*half length across the circle; length around it */



void getradius (void) /* get radius from the user  */
{
 printf("Type in a radius in cm: ");
 scanf ("%lf", &radius);
 printf("You entered %lf cm. \n", radius);
}



void calculateC (void) /* uses c=2 pi r to get C */
{
 C = 2 * pi * radius;
}



void print_result (void) /* prints C and radius*/
{
 printf("\n\nA circle with radius %lf has c of %lf cm. \n", radius,C);
}


void main (void)
{
 printf("This program finds the circunference given your radius. \n");
 getradius();
 calculateC();
 print_result();
 } 




























