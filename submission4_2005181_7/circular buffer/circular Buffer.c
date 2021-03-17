
//  LIBRARIES
#include <stdio.h>
#include <stdlib.h>

// HEADER FILE
#include"circularBuffer.h"





int main(void) {
	int	circularBuffer[SIZE_OF_BUFFER] = { 0 };	// Empty circular buffer
	int	optionNumber	=	0;	// User-input option number
	int	readIndex	    =	0;	// Index of the read pointer
	int	writeIndex	    =	0;	// Index of the write pointer
	int	bufferLength	=	0;	// Number of values in circular buffer
    int loopStatus      =   0;  // Loop condition variable

	while (loopStatus != EXIT_LOOP) {
		displayMainMenu();
		getNumber(&optionNumber);  // Get option number from user

	/* ---------------------------- OPTION 1 - WRITE --------------------------- */

		if (optionNumber == 1) {
    		// Check if buffer is full
			if (bufferLength == SIZE_OF_BUFFER) {
				printf("\n    Buffer is full!\n\n    ");
				getchar();
				continue;
			}

			printf("\n    Please input an integer to store in the array\n\n    ");
			getNumber(&circularBuffer[writeIndex]);	 // Write number to address of buffer index

			bufferLength++;	 //	Increase buffer size after writing
			writeIndex++;	 //	Increase writeIndex position to prepare for next write

			// If at last index in buffer, set writeIndex back to 0
			if (writeIndex == SIZE_OF_BUFFER) {
				writeIndex = 0;
			}
		}

	/* ---------------------------- OPTION 2 - READ ---------------------------- */

		else if (optionNumber == 2) {
            // Check if buffer is empty
			if (bufferLength == 0) {
				printf("\n    Buffer is empty!\n\n    ");
				getchar();
				continue;
			}

			printf("\n    The output value is %d\n\n    ", circularBuffer[readIndex]);
			getchar();

			bufferLength--;	 //	Decrease buffer size after reading
			readIndex++;	 //	Increase readIndex position to prepare for next read

            // If at last index in buffer, set readIndex back to 0
			if (readIndex == SIZE_OF_BUFFER) {
				readIndex = 0;
			}
		}

    /* ---------------------------- OPTION 3 - EXIT ---------------------------- */

        else if (optionNumber == 3) {
            printf("\n    Thanks for using the circular buffer!\n\n");
            loopStatus = EXIT_LOOP;
            continue;
        }

	/* ----------------------------- INVALID OPTION ---------------------------- */

		else {
			printf("\n    Invalid option number!\n\n    ");
			getchar();
		}
	}
}

