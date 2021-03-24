/**
 * Program: C program to find the divison of two numbers entered by the user.
 * Date: Wed, 24-3-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/gcc v8.1.0/Vim editor
 */

// program start

#include <stdio.h> // c header file
#include <stdlib.h>
#include <math.h>

int main() // main function
{
        system ("cls"); // clear the console screen

        printf ("Please enter first number:\n");
        double num1;
        scanf ("%lf", &num1);

        printf ("Please enter second number:\n");
        double num2;
        scanf ("%lf", &num2);

        // calculate division
        double result = num1 / num2;

        // print result
        printf ("\nDivision of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);

        printf ("\nThanks for using my app!\n");

        return 0;
}

/*
Save this file as "Div1.c"
Compile:
$ gcc Div1.c -o Div1 [hit Enter]
Execute:
$ Div1 [hit Enter]
Output:

Please enter first number:
125
Please enter second number:
5

Division of 125.00 and 5.00 is: 25.00

Thanks for using my app!
*/

