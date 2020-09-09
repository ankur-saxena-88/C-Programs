/*
C Program to calculate and display the addition of two integers.
Date: Wednesday, 09-September-2020
@author: Ankur Saxena
Platform: Linux Ubuntu 18.04 / x64 / gcc 7.5.0 / Atom Text Editor
*/

/*
Algorithm:

Step 1: Start Program.
Step 2: The user is first asked to enter two numbers and stored in the
        variables num1 and num2.
Step 3: Then, the variables num1 and num2 are added using the arithmetic
        operator (+).
Step 4: And the result is stored in the variable sum.
Step 5: Program End.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

  //Declare variables
  int num1, num2, sum;

  system ("clear"); //Clear screen command

  //Ask user to enter two numbers
  printf ("Please enter any two numbers : \n");

  //Read two numbers from the user
  scanf ("%d %d", &num1, &num2);

  //Calculate the sum of num1 and num2
  sum = num1 + num2;

  //Print the sum
  printf ("\n\n\aSum of %d and %d is :: %d\n", num1, num2, sum);

  return 0;
}

/*
Save this file as "Addition1.c"
Compile: $ gcc Addition1.c -o Addition1 <press the Enter key>
Execute: $ ./Addition1 <press the Enter key>
Output:

Please enter any two numbers :
20
30


Sum of 20 and 30 is :: 50
*/
