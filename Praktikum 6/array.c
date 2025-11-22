#include <stdio.h>
int ages[100];
void main(){
    //Isi Data Ke Array
    for(int i = 0; i < 100; i++){
        ages[i] = i;
    }

    //Cetak Isi Data
    for(int j = 0; j < 100; j++){
        printf("%i \n", ages[j]);
    }
}