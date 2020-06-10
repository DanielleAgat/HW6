//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#ifndef HW6_CLIENT_H
#define HW6_CLIENT_H

#include "stdio.h"
#include "stdlib.h"
#include "ErrorsHandlings.h"
#include "Client.h"

#define idLength 9
#define phoneLength 12
#define idSrtLen 4
#define phoneSrtLen 5

typedef struct _client {
    char id[idLength];
    char phone[phoneLength];
} Client;


typedef struct _short_client {
    unsigned char short_id[idSrtLen];
    unsigned char short_phone[phoneSrtLen];
} Short_client;

//TODO: Add description
Client* createClientArr(int n);

//TODO: Add description
void scanClientDetails(Client* clientArr, int size);

#endif
