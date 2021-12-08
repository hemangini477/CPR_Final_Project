/*
Origin: 
	Name: Hemanginiben Nileshbhai Patel, 
	email: hnpatel32@myseneca.ca, 
	ID: 133892216, 
	Date written: 01-12-2021, 
	Course: CPR 101, Project: Version 1
executable filename: Conversions
Purpose: Convert integer strings to integer
*/


// CONVERTING V1
#include "converting.h"

// definition of function coverting()
// converting int strings to int
void converting()
{
	printf("*** Start of Converting Strings to int Demo ***\n");

	char int_string[80];
	int int_number;

	printf("Type the int numeric string (q - to quit): \n");
	gets(int_string);

	// define loop to convert input strings to int until quit
	while (strcmp(int_string, "q") != 0) // compare input string with q
	{
		int_number = atoi(int_string); // convert string to int
		printf("Converted number is %d\n", int_number);
		printf("Type the int numeric string (q - to quit): \n");
		gets(int_string);
	}

	printf("*** End of Converting Strings to int Demo ***\n\n");
}