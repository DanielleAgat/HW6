//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#include "Compress.h"

Short_client* createShortClientArr(int n){
    Client* clientArr = createClientArr(n);
    return compressClientArr(clientArr, n);
}

Short_client* compressClientArr(Client* clientArr, int size) {
    Short_client *srtCln = (Short_client *) malloc(sizeof(Short_client) * size);
    checkMemoryAllocation(srtCln);

    for (int i = 0; i < size; i++){
        compressStr(clientArr[i].id,idLength,srtCln[i].short_id);
        compressStr(clientArr[i].phone,phoneLength,srtCln[i].short_phone);
    }

    free(clientArr);
    return srtCln;
}


void compressStr(char arr[],int size,unsigned char short_arr[]){
    int j = 0;

    for (int i = 0; i < size - 1 ; i++) {
        if(arr[i] == '-') {
            i++;
        }
        else if(i%2 == 0){
            short_arr[j] = (arr[i] << 4);
        }
        else {
            short_arr[j] = short_arr[j] | arr[i];
            j++;
        }
    }
}