/*
C Program To Find The Sum Of Two Integer Numbers.
Date: Thursday, 24-09-2020
@author: Ankur Saxena
Platform: Windows 10 Pro/x64/gcc 8.1.0/Atom Text Editor
*/

/*
Algorithm:

Step 1: Start
Step 2: Declare integer type variables num1, num2 and sum.
Step 3: Get the value of num1 from the user.
Step 4: Get the value of num2 from the user.
Step 5: Calculate the Sum of num1 and num2.
Step 6: And the result is stored in the variable sum.
Step 7: Print the Sum.
Step 8: Stop
*/

//C Code
#include <stdio.h>

//main method / function
int main(){

//declare integer type variables
int num1, num2, sum;

printf("Please enter the first number : \n");
scanf("%d", &num1);

printf("Please enter the second number : \n");
scanf("%d", &num2);

//calculate the sum
sum = num1 + num2;

//print the sum
printf("\a\n\nSum of %d and %d is :: %d\n", num1, num2, sum);

return 0;
}

/*
Save this file as "addition1.c"
Compile: $ gcc addition1.c -o addition1 [press the Enter key]
Execute: $ ./addition1 [press thte Enter key]
Output:

Please enter the first number :
25
Please enter the second number :
65


Sum of 25 and 65 is :: 90
*/
