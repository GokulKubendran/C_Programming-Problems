#ifndef CIRCULARBUFFER_H_INCLUDED
#define CIRCULARBUFFER_H_INCLUDED

//  CONSTANTS
#define		SIZE_OF_BUFFER		    8	// Maximum size of buffer
#define		MAX_LENGTH_OF_STRING	81  // Arbitrary number for temporary strings
#define		SUCCESS			        0
#define		FAILURE			        -1
#define		EXIT_LOOP               1


//  LIBRARIES
#include <stdio.h>
#include <stdlib.h>

//  PROTOTYPES
void	displayMainMenu(void);
int		getNumber(int* pNumber);


//  Function    :   displayMainMenu()
//  Description :   This function clears the screen and then displays the main menu
//                  for the program.
//  Parameters  :   N/A
//  Returns     :   N/A
void displayMainMenu(void) {
	printf("\n======================= CIRCULAR BUFFER ======================\n\n");
	printf("    Please choose from the following options:\n\n");
	printf("        1    Input  Value\n");
	printf("        2    Output Value\n");
	printf("        3    Exit Program\n");
	printf("\n==============================================================\n\n    ");
}



//  Function    :   getNumber()
//  Description :   This function gets a single integer as user input.
//  Parameters  :   int* pNumber: pointer to an int to store the number
//  Returns     :   int SUCCESS: if input was an int
//                  int FAILURE: if input was not an int
int getNumber(int* pNumber) {
	// An array of char to store the string
	char userInput[MAX_LENGTH_OF_STRING]	=	{ 0 };

	// Get user input
	fgets(userInput, MAX_LENGTH_OF_STRING, stdin);

	// Parse the user input for an integer and store it in the pNumber parameter
	if (sscanf(userInput, "%d", pNumber) != 1) {
		return FAILURE;
	}

	return SUCCESS;
}

#endif // CIRCULARBUFFER_H_INCLUDED
