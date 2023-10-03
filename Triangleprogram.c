/* C program by Areli Melchor CS1310 Sep 2023
 *  This program finds area of a triangle and print graphic using 
 *  Heron's formula A = s(s - a)(s - b)(s - c) where s = 1/2(a+b+c)
 * and c are the lengths od the sides *

 
			
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
 
 #include <stdio.h>
 #include<math.h> /*include math for the sqrt() function*/
 
 
 
 void main(void)
{
	
	double side1,side2,side3,s,area;
	/* side1,side2,side3 holds user input for lenghts of triangle, 
	   s holds the value of semi perimeter,
	   area holds the area of triangle */
	   
	/* print instructions to the user and ask and get the lenght of triangle */

 printf("This program calculate the area of 3 sides of a triangle with Heron's formula in cm \n\n");
 printf("Please type in side1 of the triangle in cm: ");
 scanf ("%lf", &side1);
 printf("You entered %lf cm. \n\n", side1);
 printf("Please type in side2 of the triangle in cm: ");
 scanf ("%lf", &side2);
 printf("You entered %lf cm. \n\n", side2);
 printf("Please type in side3 of the triangle in cm: ");
 scanf ("%lf", &side3);
 printf("You entered %lf cm. \n\n", side3);
 

if (side1<=0 || side2<=0 || side3<=0) /*if any of the side are less than or equal to 0,
                                        then they don't make a triangle */
	{
	printf("The lengths do not make a triangle because side must"
		       "\nbe positive numbers and greater than 0. \n\n"); /*side must be positive*/
    }
 

    
else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) 
	   printf("These side lenghts cannot form a triangle. \n");       
    
else /*Calculate semi-perimeter*/
     s = (side1 + side2 + side3)/2.0;
	
	/*Calculate area using Heron's formula*/
	 area = sqrt (s * (s - side1) * (s - side2) * (s - side3)); 
 
     printf("\nThe lenghts make a triangle. \n\n");
	 printf("The area of the triangle is %lf cm. \n\n",area); /*print area of triangle*/
	 
	 printf("   /\\\n");
     printf("  /  \\\n");
     printf(" /    \\\n");
     printf("/______\\\n");


}
 
 














 
