/*
 * Program: Write a C program that accepts a string from the user and display on the console screen.
 * Date: Monday, 01-03-2021
 * @author: Ankur Saxena
 * Platform: Windows 10 Pro/x64/gcc 8.0/Vim editor
 */

/*
Sample Testcase 1:

Input:

Hello World! I am coming back to the race.

Output:

Hello World! I am coming back to the race.
*/

// program 2: using "fgets ()" command
// program start

#include <stdio.h> // c header file
#include <stdlib.h>

int main () // main function
{
	char ch [125];

	system ("cls");

	// take string input using "fgets ()" command
	fgets (ch, 125, stdin);

	// print the output
	printf ("%s\n", ch);

	return 0;
}

// program end
// Save this file as "TakeInput2.c"
// Compile: $ gcc TakeInput2.c -o TakeInput2 [hit Enter]
// Execute: $ TakeInput2 [hit Enter]

/*
Output:

Hello World! I am coming back to the race.
Hello World! I am coming back to the race.
*/

