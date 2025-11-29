#include <stdio.h>

// Fungsi Untuk Melakukan Pertukaran Nilai
void tukar(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    // Deklarasi Variabel
    int a, b;

    // Menginputkan Nilai
    printf("Masukan nilai a : ");
    scanf("%d", &a);
    printf("Masukan nilai b : ");
    scanf("%d", &b);

    // Menampilkan nilai SEBELUM ditukar
    printf("Sebelum ditukar : a = %d, b = %d\n", a, b);

    // Melakukan Pertukaran Nilai Menggunakan Pointer
    tukar(&a, &b);

    // Menampilkan nilai SETELAH ditukar
    printf("Setelah ditukar : a = %d, b = %d\n", a, b);

    return 0;
}