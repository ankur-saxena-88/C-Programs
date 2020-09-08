/*
Write a C program to print "Hello World!" message on the console or output screen.
Date: Monday, 07-September-2020
@author: Ankur Saxena
Platform: Linux Ubuntu 18.04 Lts / gcc 7.5.0 / Atom Text Editor
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

  system ("clear");

  /* 'clear' command is used for clear the console screen.
  This commans is present inside the "stdlib.h" header file.
  In Windows machine, use "cls" command to clear the console.
  */

  //Print the "Hello World!" message
  printf("Hello World!\n");

  return 0;
}

/*
Save this file as "HelloC.c"
Compile: $ gcc HelloC.c -o HelloC [press the Enter key]
Execute: $ ./HelloC [press the Enter key]
Output:

Hello World!
*/
