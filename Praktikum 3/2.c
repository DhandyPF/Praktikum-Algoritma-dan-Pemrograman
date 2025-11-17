#include <stdio.h>
int main(){
    int i = 0, total = 0, angka;

    printf("Masukan Angka : ");
    scanf("%i", &angka);

    while (i <= angka) {
        total += i;
        i++;
    }
    
    printf("%i", total);

    return 0;
}