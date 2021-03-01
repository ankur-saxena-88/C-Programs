/*
Program: Write a C program to print the following message on the console screen using single "printf ()" command:

	Hello C World!
	Welcome to the world of C Programming...
	Let us learn C Programming Language!!
Date: Monday, 01-02-2021
@author: Ankur Saxena
Platform : Windows 10 Pro/x64/gcc 8.0/Vim editor
*/

// program start

#include <stdio.h> // c header file
#include <stdlib.h>

int main () // main function
{
	system ("cls"); // used for clear the console screen
	/*
	 * In Linux or MacOS, use "clear" inside the "system ()" command.
	 */

	// printing the message
	printf ("Hello C World!\nWelcome to the world of C Programming...\nLet us learn C Programming Language!!\n");

	return 0;
}

// program end

// Save this file as "HelloWorld2.c"
// Compile: $ gcc HelloWorld2.c -o HelloWorld2 [hit Enter]
// Execute: $ HelloWorld2 [hit Enter]

/*
Output:

Hello C World!
Welcome to the world of C Programming...
Let us learn C Programming Language!!
*/

