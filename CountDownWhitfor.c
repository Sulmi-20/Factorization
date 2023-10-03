/* C program by Areli Melchor for CS1310 Sep 2023
 * for loop - count to dowm
 */
#include<stdio.h>



void main (void)
{
 int count, number=0;   /*to count down, hold user's value */
 
 printf("This program count down from your number. \n\n");	
 do { /* make sure number is positive */
     printf ("Type in a positive integer: ");
     scanf ("%d", &number);
     printf("You entered %i.\n\n", number);
    } while (number <= 0);

 printf ("Count down from %i.\n", number);
 for (count=number; count>=0; count=count-1) /*print number to 0 */
     printf(" %i ", count);    

 printf("\nCount down again!\n");
 for (count=0; count<=number; count++)
     printf(" %i ", number-count);
     
 printf("\n\n Count up! \n");
 for (count=1; count<=number; count++)
     printf(" %i ", count);
	    
 printf("\n\n Count dowm! \n");
 count=number;
 while (count >=0) /* count down with a while */
       {
       	printf(" %i ", count);
       	count = count - 1;
		}
 printf("\n\n");		
		
}
