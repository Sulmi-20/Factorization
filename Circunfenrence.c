/* C program by Areli Melchor CS1310 Aug 2023
 * find circumference given the radious
 */
 #include <stdio.h>
 #define pi 3.14   /* the constant pio for circle */
 
 
 
 void main(void)
 {
 double radius, circumference; /* input in cm, calculate */
 double area; /* calculate from radius pi*r^2 */
 
 /* get radius from the use */
 printf ("This program finds the circumference of your circle. \n");
 printf ("Type in the radius in inches:  ");
 scanf ("%lf", &radius);
 printf("You entered %3lf inches. \n", radius);
 
 /* calculated and print the circumference */
 circumference = 2 * pi * radius;
 printf("Your circle with raius %lf has a circumference of %lf inches.\n",
          radius, circumference);
 area = pi * radius * radius;
 printf("The area of your circle is %lf square inches. \n\n", area);         
          
         	
 	
 	
 }












