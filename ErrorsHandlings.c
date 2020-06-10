//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#include "ErrorsHandlings.h"

void checkMemoryAllocation(void* ptr){
    if(ptr == NULL){
        printf("ERROR: Memory allocation failed!");
        exit(1);
    }
}

void isFileOpeningSuccessfull(FILE* file){
    if(file == NULL){
        printf("ERROR: File couldn't be open!");
        exit(1);
    }
}

void closeFileWithValidation(FILE* file){
    if(fclose(file) != 0){
        printf("ERROR: File couldn't be closed!");
        exit(1);
    }
}