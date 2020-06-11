//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#ifndef HW6_SEARCHCLIENT_H
#define HW6_SEARCHCLIENT_H
#include "stdio.h"
#include "stdlib.h"
#include "ErrorsHandlings.h"
#include "Client.h"
#include "Compress.h"
#include "string.h"
#include "stdbool.h"

#define EOS '\0' //End Of String
#define mask 0x0F

//This function gets a compressed phone book, it's size and an id and returns the matching phone number
char* searchClientByID(Short_client* arr, int size, char id[]);

//This function gets a compressed numeric string and updates a given array with its decompressed value.
void decompressStr(char arr[],int size,unsigned char short_arr[]);

//This function gets a compressed ID and returns 'true' if equal ; 'false' otherwise.
bool isIDEqual(unsigned char arr1[], unsigned char arr2[]);

#endif
