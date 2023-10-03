/* C program by Areli Melchor for CS1310 Sep 2023
 * given sides a and b in right triangle, 
 * calculate the angle and other side. 
 */
#include <stdio.h>
#include <math.h> /* asin() for arcsin */



double get_leg (void) /* get and return a side length */
{
 double leg; /* Length input from user */
 
 printf("What is the lengths of a leg?  ");
 scanf ("%lf", &leg);
 printf("You gave %lf for a leg length. \n", leg);
 return leg;
 
}


void main (void)
{
 double a, b, c, A, B, C=90; /* 3 side lengths, 3 angle measure in degrees */
  
 printf ("Given two lengths of a right triangle, and get the rest calculated. \n");
 a = get_leg();
 b = get_leg();
 printf ("Calculating the rest with %lf and %lf legs. \n\n\n", a, b);

c = sqrt(a*a + b*b);
A = (180.0 / 3.14) * asin(a/c);
B = (180.0 / 3.14) * asin(b/c);
printf ("You");
}






























