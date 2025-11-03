#include <stdio.h>

int main(){
    int nilai;

    printf("Masukan Nilai : ");
    scanf("%i", &nilai);

    if (nilai >= 85){
        printf("A");
    } else if (nilai >= 70) {
        printf("B");
    } else if (nilai >= 50) {
        printf("C");
    } else {
        printf("D");
    }
    return 0;
}
// buatlah program menggunakan for loop yang menerima input bilangan dari pengguna sebanyak 10 kali dan mencari bilangan terkecil lau tampilkan