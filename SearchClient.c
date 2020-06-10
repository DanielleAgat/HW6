//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#include "SearchClient.h"

char* searchClientByID(Short_client* arr, int size,char id[]){
    unsigned char srtId[idSrtLen];
    char* phone = (char*)malloc(sizeof(char) * phoneLength);

    compressStr(id,idLength,srtId);
    for(int i = 0 ; i < size ; i++){
        if(arr[i].short_id == srtId){
            decompressStr(phone,phoneLength,arr[i].short_id);
            return phone;
        }
    }

    return NULL;
}

void decompressStr(char* arr,int size,unsigned char short_arr[]) {
    int j = 0;

    for (int i = 0; i < size - 1 ; i++) {
        if(i == 3) {
            arr[i] = '-';
        }
        else if(i%2 == 0){
            arr[i] = short_arr[j] >> 4;
        }
        else {
            arr[i] = short_arr[j] & mask;
            j++;
        }
    }
    arr[size-1] = EOS;
}
