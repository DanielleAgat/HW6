//Student's name: Danielle Agat Levi
//Student's ID: 313357329

#include "SearchClient.h"

char* searchClientByID(Short_client* arr, int size,char id[]){
    unsigned char srtId[idSrtLen];
    char* phone = (char*)malloc(sizeof(char) * phoneLength);
    checkMemoryAllocation(phone);

    compressID(id,idLength,srtId);
    for(int i = 0 ; i < size ; i++){
        if(isIDEqual(arr[i].short_id,srtId)){
            decompressPhone(phone,phoneLength,arr[i].short_phone);
            return phone;
        }
    }

    return NULL;
}

void decompressPhone(char* arr,int size,unsigned char short_arr[]) {
    int j = 0;

    for (int i = 0; i < size - 1 ; i++) {
        if(i == 3) {
            arr[i] = '-';
        }
        else if((i%2 == 0 && i < 3) || (i%2 == 1 && i > 3)){
            arr[i] = (short_arr[j] >> 4) + '0';
        }
        else {
            arr[i] = (short_arr[j] & mask) + '0';
            j++;
        }
    }
    arr[size-1] = EOS;
}

bool isIDEqual(unsigned char arr1[], unsigned char arr2[]){
    for(int i=0; i < idSrtLen ; i++){
        if(arr1[i] != arr2[i])
            return false;
    }
    return true;
}