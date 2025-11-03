#include <stdio.h>

int main(){
    int angka;

    printf("Masukan Angka : ");
    scanf("%i", &angka);

    if (angka > 0) {
        printf("Bilangan Positif");
    } else if (angka < 0) {
        printf("Bilangan Negatif");
    } else {
        printf("Nol");
    }
    return 0;
}