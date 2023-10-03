/* C program by Areli Melchor for CS1310 Sep 2023
 * print 1 to n given by the user 
 */
#include <stdio.h>



int get_input (void) /*ask for an return an integer >0 */
{
 int num= -1; /*to return user value; force starting while */
 
 while (num <1) /* get a positive integer*/
     {
      printf ("Type in a positive integer:  ");
	  scanf ("%d", &num);
	  printf ("You entered %i. \n", num);	
	 }
 
 	
}


void main (void)
{
 int count = 1, number; /* number for loops, user's value */
 
 printf ("This program prints 1 to your number. \n\n");
 number = get_input();
 
 printf ("\n\nThe integers 1 to %i are \n", number);
 while (count <= number)  /* print number until count is less than it */
     {
      printf (" %i ", count);
	  count = count + 1;	
	 }
 
 count = number; 
 printf ("\n\nThe number %i to 1 are \n");
 while (count >0) /*print count while >0 */
     {
      printf ("%i ", count);
	  count = count -1;	
	 }


}
