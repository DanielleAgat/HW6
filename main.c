//Student's name: Danielle Agat Levi
//Student's ID: 313357329

/* This program is a compressed phone book. It gets client details from a user and compress them into half size.
 * Then It gets an ID from a user and prints it's phone number
 */

#include <stdio.h>
#include "stdlib.h"
#include "Compress.h"
#include "Client.h"
#include "SearchClient.h"


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




