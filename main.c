#include <stdio.h>

#include "stdio.h"
#include "stdlib.h"

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


void main() {
    int n;
    Short_client * arr;
    char id[9];
    char * phone;

    printf("Please enter the number of clients: ");
    scanf("%d", &n);
    arr = createShortClientArr( n);
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