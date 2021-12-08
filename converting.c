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

    // Project: Version 2
    // converting double strings to double
    printf("*** Start of Converting Strings to double Demo ***\n");

	char double_string[80];
	double double_number;

	printf("Type the double numeric string (q - to quit): \n");
	gets(double_string);

	// define loop to convert input strings to double until quit
	while (strcmp(double_string, "q") != 0) // compare input string with q
	{
		double_number = atof(double_string); // convert string to double
		printf("Converted number is %f\n", double_number);
		printf("Type the double numeric string (q - to quit): \n");
		gets(double_string);
	}

	printf("*** End of Converting Strings to double Demo ***\n\n");

    // Project: Version 3
    // converting long strings to long
    printf("*** Start of Converting Strings to long Demo ***\n");

	char long_string[80];
	long long_number;

	printf("Type the long numeric string (q - to quit): \n");
	gets(long_string);

	// define loop to convert input strings to long until quit
	while (strcmp(long_string, "q") != 0) // compare input string with q
	{
		long_number = atol(long_string); // convert string to double
		printf("Converted number is %ld\n", long_number);
		printf("Type the long numeric string (q - to quit): \n");
		gets(long_string);
	}

	printf("*** End of Converting Strings to long Demo ***\n\n");
}