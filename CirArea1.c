/**
 * Program: C program to calculate the area of the circle.
 * Date: Thu, 25-03-2021
 * @author: Ankur Saxena
 * Platform: Windows 10/x64/gcc 8.1/Vim editor
 */

// program start

#include <stdio.h> // c header file
#include <stdlib.h>

// main function, entry point of the program
int main()
{
    system("cls"); // clear the console screen

    printf ("Please enter the radius of the circle:\n");
    double radius;
    scanf ("%lf", &radius);

    // calculate area of the circle
    double pi = 3.14;
    double cirArea = pi * radius * radius;

    // print result
    printf ("\n\n\aArea of the Circle is: %.2lf\n", cirArea);

    return 0;
}

// program end
// compile: $ gcc CirArea1.c -o CirArea1 [hit Enter]
// execute: $ CirArea1 [hit Enter]

/*
output:

Please enter the radius of the circle:
15


Area of the Circle is: 706.50
*/

