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
        compressID(clientArr[i].id,idLength,srtCln[i].short_id);
        compressPhone(clientArr[i].phone,phoneLength,srtCln[i].short_phone);
    }

    free(clientArr);
    return srtCln;
}


void compressPhone(char arr[],int size,unsigned char short_arr[]){
    int j = 0;

    for (int i = 0; i < size - 1 ; i++) {
        if(arr[i] == '-') {
        }
        else if((i%2 == 0 && i < 3) || (i%2 == 1 && i > 3)){
            char numericChar = (arr[i] - '0') << 4;
            short_arr[j] = numericChar;
        }
        else {
            char numericChar = (arr[i] - '0');
            short_arr[j] = short_arr[j] | numericChar;
            j++;
        }
    }
}

void compressID(char arr[],int size,unsigned char short_arr[]){
    int j = 0;

    for (int i = 0; i < size - 1 ; i++) {
        if(i%2 == 0){
            char numericChar = (arr[i] - '0') << 4;
            short_arr[j] = numericChar;
        }
        else {
            char numericChar = (arr[i] - '0');
            short_arr[j] = short_arr[j] | numericChar;
            j++;
        }
    }
}