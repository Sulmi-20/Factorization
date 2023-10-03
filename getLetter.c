/* C program by Areli Melchor for CS1013 Aug 2023
 * scanf example - get input and print it out
 */
 #include <stdio.h>
 
 
 
 void main (void)
 {
 char letter; /* get user character */
 int inumber = 0; /*integer input*/
 double dnumber; /* floating point inpunt */
 
  printf ("This program prints out what you type in. \n\n");
  printf ("Type in a character and enter: ");
  scanf ("%c", &letter);
  printf("You entered %c. \n\n", letter);
  getchar(); /* read in newline/enter */
  
  printf ("Type in another character and enter: ");
  scanf ("%c", &letter);
  printf("You entered a second letter %c. \n\n", letter);
 
  printf("Type in an integer: ");
  scanf ("%d", &inumber);
  printf ("You typed in %i.   %c    %lf \n\n",  inumber, letter, dnumber);
  
  printf ("Type in any number and enter: ");
  scanf ("%lf", &dnumber);
  printf("You entered the number %lf. \n\n", dnumber);
  
  
 }
   
