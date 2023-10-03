/* C program by Areli Melchor for CS1310 Sep 2023
 * check for input > zero
 */
#include <stdio.h>



void main(void)
{
 double number = 0; /* get value from user */
 
 printf("Check for a valid value. \n\n");
 printf("Type a distance or length:  ");
 scanf("%lf", &number);
 printf("You entered %lf. \n", number);	
	
 if (number <=0)	/* check for positive numb er */
     printf ("%lf must be positive for a length. \n", number);
 else /* number must be positive */
     {
      printf("%lf is a good value. \n", number);
	  printf("You can divide by %lf such as 1/%lf = %lf. \n\n",
	           number, number, 1.0/number );	
     	
	 }
	
	
}
 
