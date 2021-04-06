/*
Program: C program to calculate the area of a rectangle.
Date: Tue, 6-4-2021
@author: ANKUR SAXENA
Platform: Windows 10 Pro/x64/gcc 8.1/VS Code
*/

// formula to calculate the area of a rectangle, Area = width * height

// program start

#include<stdio.h> // c header file
#include<stdlib.h>

// main function
int main()
{
    system ("cls"); // clear the console screen
    
    printf("\nPlease enter the width of the rectangle:\n");
    double width;
    scanf("%lf",&width);

    printf("\nPlease enter the height of the rectangle:\n");
    double height;
    scanf("%lf",&height);

    // calculate area of a rectangle
    double rec_area = width * height;

    // print area of a rectangle
    printf("\nArea of a rectangle is: %.2lf\n",rec_area);
}

// program end

// save this file as 'RectangleArea1.c'
// compile: $ gcc RectangleArea1.c -o RectangleArea1 [hit Enter]
// execute: $ RectangleArea1 [hit Enter]

/*
Please enter the width of the rectangle:
12

Please enter the height of the rectangle:
9

Area of a rectangle is: 108.00
*/
