//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#ifndef HW6_SEARCHCLIENT_H
#define HW6_SEARCHCLIENT_H
#include "stdio.h"
#include "stdlib.h"
#include "ErrorsHandlings.h"
#include "Client.h"
#include "Compress.h"

#define EOS '\0' //End Of String
#define mask 0x0F

//TODO: Add description
char* searchClientByID(Short_client* arr, int size, char id[]);

//TODO: Add description
void decompressStr(char arr[],int size,unsigned char short_arr[]);

#endif
