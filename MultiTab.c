/*
Program: C program to find the multiplication of two numbers entered by the user.
Date: Wed, 24-3-2021
@author: Ankur Saxena
Platform: Windows 10 Pro/x64/gcc v7.1.1/Vim editor
*/

// program start

#include <stdio.h> // c header file
#include <stdlib.h>

int main() // main function
{
    system ("cls"); // clear the console screen
    
    /*
    for linux / macos, use "clear" command inside the "system ()" function.
    */
    
    printf ("Please enter first number:\n");
    int num1;
    scanf ("%d", &num1);
    
    printf ("Please enter second number:\n");
    int num2;
    scanf ("%d", &num2);
    
    // calculate multiplication
    int result = num1 * num2;
    
    // print result
    printf ("\nThe multiplication of %d and %d is: %d\n", num1, num2, result);
    
    printf ("\nThanks for using my application!\n");
    
    return 0;
}

// program end

/*
Save this file as "MultiTab.c"
compile:
$ gcc MultiTab.c -o MultiTab [hit Enter]
execute:
$ MultiTab [hit Enter]
output:

Please enter first number:                                                                                                      
25                                                                                                                              
Please enter second number:                                                                                                     
5                                                                                                                               
                                                                                                                                
The multiplication of 25 and 5 is: 125                                                                                          
                                                                                                                                
Thanks for using my application!
*/
