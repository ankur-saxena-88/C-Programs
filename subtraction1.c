/*
C Program To Find The Subtraction Of Two Integer Numbers.
Date: Thursday, 24-09-2020
@author: Ankur Saxena
Platform: Windows 10 Pro/x64/gcc 8.1.0/Atom Text Editor
*/

/*
Algorithm:

Step 1: Start
Step 2: Declare two integer type variables num1 and num2.
Step 3: Declare integer type variable subtract.
Step 4: Get the value of num1 from the user.
Step 5: Get the value of num2 from the user.
Step 6: Calculate the Subtraction of num1 and num2.
Step 7: And the result is stored in the variable subtract.
Step 8: Print the Subtraction.
Step 9: Stop
*/

//C Code

#include<stdio.h>
#include<stdlib.h>

//main method / function
int main(){

  //declare integer type variables
  int num1, num2;
  int subtract;

  system("cls");

  printf("Please enter the first number : \n");
  scanf("%d", &num1);

  printf("Please enter the second number : \n");
  scanf("%d", &num2);

  //calculate the subtraction
  subtract = num1 - num2;

  //print subtraction
  printf("\a\n\nSubtraction of %d and %d is :: %d\n", num1, num2, subtract);

  return 0;
}

/*
Save this file as "subtraction1.c"
Compile: $ gcc subtraction1.c -o subtraction1 [press the Enter key]
Execute: $ ./subtraction1 [press the Enter key]
Output:

Please enter the first number :
225
Please enter the second number :
63


Subtraction of 225 and 63 is :: 162
*/
