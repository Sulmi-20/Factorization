/* C program by Areli Melchor CS1310 Sep 2023
 * how many digits in an integer; use if-else
 */
#include <stdio.h>



void main (void)
{
 int number; /* holds the number from a user */
 
 printf ("This program says how many digits are in your number. \n");	
 printf ("Type in an integer: ");
 scanf("%d", &number);
 printf("You entered %i. \n\n", number);
 
 /* check fror number of digits */
 if (number>-10 && number<10) /* a single digit */
     printf("%i has one digit. \n", number);
 else if (number>-100 && number<100) /*two digits */
     printf ("%i has two digits. \n", number);
 else if (number>-1000 && number<1000) /*three digits */
     printf ("%i has three digits. \n", number);
 else if (number>-10000 && number<10000) /*four digits */
     printf ("%i has four digits. \n", number);
 else if (number>-100000 && number<100000) /*five digits */
     printf ("%i has five digits. \n", number);
 else if (number>-1000000 && number<1000000) /*six digits */
     printf ("%i has six digits. \n", number);
 else if (number>-10000000 && number<10000000) /*seven digits */
     printf ("%i has seven digits. \n", number);
 else if (number>-100000000 && number<100000000) /*eight digits */
     printf ("%i has eight digits. \n", number);
 
     printf("\nThe number %i has more than ones digit. \n", number);	
	
	
	
}
