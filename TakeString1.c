/*
 * Program: Write a C program that accepts a string from the user and display on the console screen.
 * Date: Monday, 01-03-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/gcc 8.0/Vim editor
 */

/*
Sample TestCase 1:

Input:

Hello World! I am coming back to the race.

Output:

Hello World! I am coming back to the race.
*/

// program start

#include <stdio.h> // c header file
#include <stdlib.h>

int main () // main function
{
	system ("cls"); // used to clear the console screen
	// in linux or macos, use "clear" inside the "system ()" command.
	
	// declare a variable named "in_str" to hold our input
	char in_str [125];


	// read a full line of input from stdin and save it to the "in_str" variable
	scanf ("%[^\n]", in_str);

	// print the output
	printf ("%s\n", in_str);

	return 0;
}

// program end

// Save this file as "TakeString1.c"
// Compile: $ gcc TakeString1.c -o TakeString1 [hit Enter]
// Execute: $ TakeString1 [hit Enter]

/*
Output:

Hello World! I am coming back to the race.
Hello World! I am coming back to the race.
*/

