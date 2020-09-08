/*
Write a C program that accept a string from the user and display on the console.
Date: Tuesday, 08-September-2020
@author: Ankur Saxena
Platform: Linux Ubuntu 18.04 Lts / gcc 7.5.0 / Atom Text Editor
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

  system ("clear"); //Clear screen command

  //Declare string variable as character array
  char str [50];

  //Input the string
  printf("Please enter the String : ");
  scanf ("%[^\n]s", str);

  //Output the string
  printf("\n\n\aThe entered String is :: %s\n", str);

  return 0;
}

/*
Save this file as "InOutString.c"
Compile: $ gcc InOutString.c -o InOutString [press the Enter key]
Execute: $ ./InOutString [press the Enter key]
Output:

Please enter the String : Ankur Saxena


The entered String is :: Ankur Saxena
*/
