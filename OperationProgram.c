/* C program by Areli Melchor for CS1310 Sep 2023
 * This program will get two numbers from the user
 * and will add, subtract, multiply and divide. 
 *	
     __         -----  ----
    / ---      ( (0) |/(0)  )
         __    \____/U\____/
      \\\\/
        L\           ||
         \\ _ _ _ _ | || _ _ _ _ 
          \\| ___ | [ ] __/___ |\-|
           \| ---          --- |/-|
            | *   ||| ||  \--- |_ 
        ____|    *|[][ ] ---   |__
      || AMM|     AAMM___[ ]__ |A M\
      || AMM|=O          O | = | AMM|
      \L AMM|                 \| AMM|   ___))
                                        '''
 */
#include<stdio.h>


	
double get_Input(void) /*Function to get numerical input from the user */
  {
      double num; /* Holds user's input */
      printf("\nPlease type in a number: ");
	  scanf ("%lf", &num); /*Get user input */
	  return num;	/*Return the user input to main */
  }



void Addition (double num1, double num2) /*Funtion to add user input */
  {
     printf("%lf + %lf = %lf \n", num1, num2, num1 + num2);
  }


void Subtraction (double num1, double num2) /*Funtion to subtract user input */
  {
    printf("\n%lf - %lf = %lf \n", num1, num2, num1 - num2);	
  }
   

void Multiplication (double num1, double num2) /*Funtion to multiply user input */
  {
  	
    printf("\n%lf * %lf = %lf \n", num1, num2, num1*num2);
  }


void Division (double num1, double num2)   /*Function to divide user input */
  {
    if (num2==0) /* Check if the input is a zero */
	   printf("Error can not divide by zero \n");
	
	else /* The input is not a zero */
	   printf ("\n%lf / %lf = %lf\n", num1, num2, num1/num2);    
  }




void main(void)
{
 double num1, num2; /*values given by the user */
 int operation; /* to choose an operation*/
 
 
   printf("This program will add, subtract, multiply and divide two numbers. \n");
 
 
 /*get two numbers */
num1 = get_Input(); /*Call function to get the num1 Input */
num2 = get_Input(); /*Call function to get the num2 Input */
    printf("\nThe numbers you entered are %2.lf and %2.lf. \n\n", num1, num2);

  
  
/*print a menu for the user to select an operation */
    printf("********************************************\n");
    printf("*              Menu                        *\n");
    printf("********************************************\n");
    printf("*                                          *\n");
    printf("*  1. Addition                             *\n");
    printf("*  2. Subtraction                          *\n");
    printf("*  3. Multiplication                       *\n");
    printf("*  4. Division                             *\n");
    printf("*  5. All Four Operations                  *\n");
    printf("*  6. Quit                                 *\n");
    printf("*                                          *\n");
    printf("********************************************\n");

/*ask the user to type their choice */
    printf ("Enter your choice 1,2,3,4,5 or 6: ");
    scanf ("%i", &operation); /*get number chosen by user */
    printf ("You entered %i. \n\n", operation);


 switch (operation) 
       {	
        case 1:
             Addition(num1, num2); /*Call the add function */
            break;
        case 2:               
            Subtraction (num1, num2); /*Call function to subtract num1 and num2 */
            Subtraction (num2, num1);/*Call function to subtract num2 and num1 */
            break;
        case 3:
            Multiplication(num1, num2); /*Call funtion to multiply */
            break;
        case 4:
            Division (num1, num2); /*Call function to divide num1 and num2 */
            Division (num2, num1); /*Call function to divide num2 and num1 */
            break;
        case 5:                 /* Call all funtion in one time */
            Addition (num1, num2);
            Subtraction (num1, num2);
            Subtraction (num2, num1);
            Multiplication (num1, num2);
            Division (num1, num2);
            Division (num2, num1); 
            break;
        case 6:
            printf("Thanks! Have a wonderful day!\n");
            break;
        default: /* If the number chosen does not appear in the menu */
            printf("Invalid choice, please try again!\n");   
       }
}



















