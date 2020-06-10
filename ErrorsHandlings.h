//Student's name: Danielle Agat Levi
//Student's ID: 313357329


#ifndef ERRORSHANDLING_H
#define ERRORSHANDLING_H
#include <stdio.h>
#include <stdlib.h>

//This function checks that memory allocation didn't went wrong, and stops the program if it did.
void checkMemoryAllocation(void* ptr);

//This function checks that file opening didn't went wrong, and stops the program if it did.
void isFileOpeningSuccessfull(FILE* file);

//This function checks that file closing didn't went wrong, and stops the program if it did.
void closeFileWithValidation(FILE* file);

#endif