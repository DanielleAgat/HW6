#include <stdio.h>

#include "stdio.h"
#include "stdlib.h"
#include "ErrorsHandlings.h"

typedef struct _client
{
    char id[9];     // “12345678”
    char phone[12]; // “054-1234567”
} Client;


typedef struct _short_client
{
    unsigned char short_id[4];
    unsigned char short_phone[5];
} Short_client;

//TODO: Add description
Short_client* createShortClientArr(int n);

//TODO: Add description
Client* createClientArr(int n);

//TODO: Add description
void scanClientDetails(Client* clientArr, int size);

//TODO: Add description
Short_client* compressClientArr(Client* clientArr, int size);

//TODO: Add description
Short_client compressClient(Client client);

void main() {
    int n;
    Short_client * arr;
    char id[9];
    char * phone;

    printf("Please enter the number of clients: ");
    scanf("%d", &n);
    arr = createShortClientArr(n);
    gets(id);
    phone = searchClientByID(arr,n,id);
    if(phone == NULL)
        printf("Can not find client with i.d. %s\n", id);
    else {
        printf("The phone number of client i.d. %s is %s\n", id, phone);
        free(phone);
    }
    free(arr);
}

Short_client* createShortClientArr(int n){
    Client* clientArr = createClientArr(n);
    return compressClientArr(clientArr, n);
}

Client* createClientArr(int n){
    Client* clientArr = (Client*)malloc(sizeof(Client) * n);
    checkMemoryAllocation(clientArr);
    scanClientDetails(clientArr,n);
    return clientArr;
}

void scanClientDetails(Client* clientArr, int size){
    for(int i=0 ; i <size ; i++){
        fgets(clientArr[i].id,9,stdin);
        fgets(clientArr[i].phone,12,stdin);
    }
}

Short_client* compressClientArr(Client* clientArr, int size){
    Short_client* srtCln = (Short_client*)malloc(sizeof(Short_client) * size);
    checkMemoryAllocation(srtCln);

    for(int i = 0 ; i < size ; i++)
        srtCln[i] = compressClient(clientArr[i]);

    free(clientArr);
    return srtCln;
}

Short_client compressClient(Client client){


}