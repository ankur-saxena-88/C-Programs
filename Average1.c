/**
 * Program: C program to find the average of three numbers entered by the user.
 * Date: Thu, 1-4-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/gcc 8.1/Vim editor
 */

// program start

#include <stdio.h> // c header file
#include <stdlib.h>

// main function
int main()
{
    system ("cls"); // clear the console screen

    printf ("Please enter first number: \n");
    float num1;
    scanf ("%f",&num1);

    printf ("Please enter second number: \n");
    float num2;
    scanf ("%f", &num2);

    printf ("Please enter third number: \n");
    float num3;
    scanf ("%f", &num3);

    // calculate average
    float avg = (num1+num2+num3)/3;

    // print result
    printf ("\n\nThe average of %.2f, %.2f and %.2f is: %.2f\n", num1, num2, num3, avg);

    return 0;
}

// program end

// save this file as 'Average1.c'
// compile: $ gcc Average1.c -o Average1 [hit Enter]
// executte: $ Average1 [hit Enter]

/*
output:

Please enter first number:
2.0
Please enter second number:
5.0
Please enter third number:
8.0


The average of 2.00, 5.00 and 8.00 is: 5.00

Press ENTER or type command to continue
*/

