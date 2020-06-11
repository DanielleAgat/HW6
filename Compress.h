//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#ifndef HW6_COMPRESS_H
#define HW6_COMPRESS_H

#include "stdio.h"
#include "stdlib.h"
#include "ErrorsHandlings.h"
#include "Client.h"

//This function creates a clients array and then compress its values.
Short_client* createShortClientArr(int n);

//This function gets a client array and returns a compressed client array.
Short_client* compressClientArr(Client* clientArr, int size);

//This function compresses a single numeric string.
void compressStr(char arr[],int size,unsigned char short_arr[]);


#endif
