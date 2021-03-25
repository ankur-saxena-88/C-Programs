/**
 * Program: C program to calculate the area of a triangle.
 * Date: Thu, 25-03-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/gcc 8.1/Vim editor
 */

// program start

#include <stdio.h> // c header file
#include <stdlib.h>

// main functon, entry point of the program
int main ()
{
    system ("cls"); // clear the console screen

    printf ("Please enter the width of the triangle:\n");
    double width;
    scanf ("%lf", &width);

    printf ("Please enter the height of the triabgle:\n");
    double height;
    scanf ("%lf", &height);

    // calculate the area of the triangle
    double triArea = width * height / 2;

    // print result
    printf ("\n\n\aArea of the triangle is: %.2lf\n", triArea);

    return 0;
}

// save this file as "TriArea1.c"
// compile: $ gcc TriArea1.c -o TriArea1 [hit Enter]
// execute: $ TriArea [hit Enter]
/*
output:

Please enter the width of the triangle:
25
Please enter the height of the triabgle:
5


Area of the triangle is: 62.50
*/

