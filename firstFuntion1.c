/* C program by Areli Melchor CS1310 Sep 2023
 * get the value of f(x) = 3x^2 + 2x + 1 
 */
#include<stdio.h>



void findfofx (int x) /*find f of x as above */
{
 printf ("  f(%i) = %i. \n\n", x,3*x*x + 2*x + 1);
}



void main (void)
{
 int num; /* input from the user */
 	
 printf("This program finds f(x) =  3x^2 + 2x + 1 for your x. \n\n");
 printf("What integer value do you want for f(x)? ");
 scanf ("%d", &num);
 printf("You entered %i. \n\n", num);



 findfofx (num);	
 findfofx (10);
 findfofx (num-20);
}
