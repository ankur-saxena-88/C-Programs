/*
Write a C program to calculate and display the area of the triangle using base and height.
Date: Tuesday, 08-September-2020
@author: Ankur Saxena
Platform: Linux Ubuntu 18.04 Lts / gcc 7.5.0 / Atom Text Editor
*/

/*
In this tutorial, we will learn how to create a C program to calculate and display the area of
the triangle using base and height.

Algorithm:

Step 1: Start
Step 2: Get the base of the triangle from the user.
Step 3: Get the height of the triangle from the user.
Step 4: Calculate the triangle area.
Step 5: Print the triangle area.
Step 6: end

Formula to calculate triangle area is:
Area of the triangle = (base * height) / 2
*/

//Gcc Code

#include <stdio.h>
#include <stdlib.h>

int main (){

  system ("clear"); //Clear screen command

  printf ("Please enter the base of the triangle :\n");
  double base;
  scanf ("%lf", &base);

  printf ("Please enter the height of the triangle :\n");
  double height;
  scanf ("%lf", &height);

  //Calculate the triangle area
  double triarea = (base * height) / 2;

  //print the triarea area
  printf ("\n\n\aArea of the Triangle is :: %.2lf\n", triarea);

  return 0;
}

/*
//Borland Turbo C/C++

#include <stdio.h>
#include <conio.h>

int main (){

    clrscr (); //Clear screen command

    //Declare the variables
    double base, height, triarea;

    printf ("Please enter the base of the triangle :\n");
    scanf ("%lf", &base);

    printf ("Please enter the height of the triangle :\n");
    scanf ("%lf", &height);

    //Calculate the triangle area
    double triarea = (base * height) / 2;

    //print the triarea area
    printf ("\n\n\aArea of the Triangle is :: %.2lf\n", triarea);

    return 0;
}
*/

/*
Save this file as "TriArea.c" [Turbo C Compiler: F2]
Compile: $ gcc TriArea.c -o TriArea [press the Enter key] [Turbo C Compiler: Alt + F9]
Execute: $ ./TriArea [press the Enter key] [Turbo C Compiler: Ctrl + F9]
Output:

Please enter the base of the triangle :
24
Please enter the height of the triangle :
27.6

Area of the Triangle is :: 331.20
*/
