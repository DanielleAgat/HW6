//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#ifndef HW6_COMPRESS_H
#define HW6_COMPRESS_H

#include "stdio.h"
#include "stdlib.h"
#include "ErrorsHandlings.h"
#include "Client.h"

//TODO: Add description
Short_client* createShortClientArr(int n);

//TODO: Add description
Client* createClientArr(int n);

//TODO: Add description
void scanClientDetails(Client* clientArr, int size);

//TODO: Add description
Short_client* compressClientArr(Client* clientArr, int size);

//TODO: Add description
void compressStr(char arr[],int size,unsigned char short_arr[]);


#endif //HW6_COMPRESS_H
