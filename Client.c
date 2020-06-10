//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#include "Client.h"

Client* createClientArr(int n){
    Client* clientArr = (Client*)malloc(sizeof(Client) * n);
    checkMemoryAllocation(clientArr);
    scanClientDetails(clientArr,n);
    return clientArr;
}

void scanClientDetails(Client* clientArr, int size){
    for(int i=0 ; i <size ; i++){
        fgets(clientArr[i].id,idLength,stdin);
        fgets(clientArr[i].phone,phoneLength,stdin);
    }
}
