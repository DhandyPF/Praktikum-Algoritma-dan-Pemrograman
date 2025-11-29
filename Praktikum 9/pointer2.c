#include <stdio.h>

// Fungsi Untuk Melakukan Perhitungan Luas dan Keliling
void hitungLuasKeliling(int panjang, int lebar, int *luas, int *keliling){
    *luas = panjang * lebar;
    *keliling = 2 * (panjang + lebar);
}

int main(){
    // Deklarasi Variabel
    int panjang, lebar, luas, keliling;

    // Menginputkan Nilai ke Variabel Panjang dan Lebar
    printf("Masukan panjang : ");
    scanf("%d", &panjang);
    printf("Masukan nilai lebar : ");
    scanf("%d", &lebar);

    // Memanggil Fungsi Untuk Melakukan Operasi Luas dan Keliling
    hitungLuasKeliling(panjang, lebar, &luas, &keliling);

    // Menampilkan Hasil Perhitungan Luas
    printf("Luas = %d\n", luas);

    // Menampilkan Hasil Perhitungan Keliling
    printf("Keliling = %d\n", keliling);

    return 0;
}