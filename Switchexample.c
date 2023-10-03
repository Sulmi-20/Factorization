/* C program by Areli Melchor CS1310 Sep 2023
 * This program prints the name of a digit using switch
 */
#include <stdio.h>


void main (void)
{
 int digit; /* holds user's number*/
 
 printf ("This program prints the name of your digit. \n\n");
 printf("Type in a single positive digit: ");
 scanf("%d", &digit);
 printf("You entered %i. \n\n", digit);	
 
 printf("The name of your digit is ");
 switch (digit) /*print the digit name */
     {
       case 0:
	           printf("zero");
			   break;
	   case 1:	
     	       printf("one");
			   break;
	   case 2:	
     	       printf("two");
			   break;
	   case 3:
	   	       printf("three");
	   	       break;
	   case 4:
	   	       printf("four");
	   	       break;
	   case 5: 
	           printf("five");
	           break;
	   case 6: 
	           printf("six");
	           break;
	   case 7: 
	           printf("seven");
	           break;
	   case 8:
	           printf("eight");
			   break;
	   case 9: 
	           printf("nine");
			   break;
	   case 10: 
	           printf("ten");
			   break;
	   case 100:
	           printf("one hundred");
			   break;
			   
	   case -1:	
     	       printf("negative one");
			   break;
	 	    
	  default:
	  	       printf ("%i is not a single, positive digit", digit);
     }     
 printf (". \n\n");	
}
 
 
 
 
 
 
 
