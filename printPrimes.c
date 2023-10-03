/* C program by Areli Melchor CS1310 Sep 2023
 * finds primes Less than an input value 
 */
#include<stdio.h>



void main (void)
{
 int number, i=1, j;  /* user's value; for the loops */
 int isprime = 0;    /*flag for is a number prime; 1=true */
 
 printf ("This program print out primes up to your number. \n");
 do  {  /* input must be positive */
       printf ("Enter a positive integer:  ");
       scanf ("%d", &number);
       printf ("You enter %i. \n\n", number);
     }  while (number <1);
 	
 printf ("The primes less %i are \n", number);
 while (i < number)  /*for each integer 2 to number, check if prime */
    {
     i = i + 1;    /*check nest vcalue*/
	 isprime = 1; /*assume i is prime */
	 printf (" i=%i number=%i \n", i, number); 
	 for (j=2; j<i; j++) /*see if qany number less than i divides into it */
	      if (i%j == 0) /* no remainder means not primes*/
		       isprime =0;
	 if (isprime == 1) /*the number is prime */
	        printf ("  %i  ", i); 		   	
	}	
	
}
