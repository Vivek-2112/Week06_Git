#define _CRT_SECURE_NO_WARNINGS

// write a program to input a number (inches) and convert it to 
// centimeters

// program71985 - fall23 - week01 - steveh

#include <stdio.h>
#include <stdlib.h>

#define CENTIMETERSININCHES		2.54

int main(void) {

	// input a number
	int inches;
	printf("please enter your height in inches (whole numbers only) ");

#ifdef _WIN32
	int numItemsConverted = scanf_s("%d", &inches);  
#else
	int numItemsConverted = scanf("%d", &inches); 
#endif

	if (numItemsConverted != 1 || inches <= 0) {
		printf("thats not an acceptable input\n");
		exit(EXIT_FAILURE);
	}

	// transform to cm
	float  cm = inches * CENTIMETERSININCHES;

	// output
	printf("the height in cm is %.2f\n", cm);

	return EXIT_SUCCESS;
}