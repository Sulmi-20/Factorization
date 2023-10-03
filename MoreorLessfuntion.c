/* C program by Areli Melchor for CS1310 Sep 2023
 * prints out smaller/larger of two numbers
 * with funtions
 */ 
#include<stdio.h>



double get_number(void) /* ask for and returns a number */
{
 double number; /* input from user */
 
 printf ("Type in a number, any number:  ");
 scanf  ("%lf", &number);
 printf ("You entered %lf. \n\n", number);
 return number;
}



/* prints the relationship between one and two */
void PrintMoreOrLess (double one, double two)
{
 /* printf("***  in PrintMoreOrLess \n"); */
 if (one < two ) /* find out which is larger and smaller */
     printf ("%lf is smaller and %lf is lager. \n\n", one, two);
 else if (one < two)
          printf ("%lf is smaller and %lf is lager. \n\n", one, two);
      else
	       printf ("%lf and %lf are equal. \n\n", one, two);     
}



void main(void)
{
 double first, second;  /*numbers input by the user*/
 
 printf("This program tells you what number is more and less of two value. \n");
 first = get_number();
 second = get_number();
 printf(" %lf and %lf will now be compared. \n\n", first, second);
 
 PrintMoreOrLess (first, second);	
}
