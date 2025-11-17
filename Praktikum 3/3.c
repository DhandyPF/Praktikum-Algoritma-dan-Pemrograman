#include <stdio.h>

int main(){
    int i, angka, terkecil;

    printf("Masukan Bilangan Ke-1 : ");
    scanf("%i", &angka);
    terkecil = angka;

    for(i = 2; i <= 10; i++){
        printf("Masukan Bilangan Ke-%i : ", i);
        scanf("%i", &angka);

        if(angka < terkecil){
            terkecil = angka;
        }
    }

    printf("Bilangan Terkecilnya Adalah : %i", terkecil);

    return 0;
}