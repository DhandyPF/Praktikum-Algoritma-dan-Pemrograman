#include <stdio.h>
    // Fungsi Jam
    struct Jam{
        int jam;
        int menit;
        int detik;
    };

int main(){
    int jam, menit, detik;

    // Inisialisasi j1
    struct Jam j1 = {1, 123, 234};
    while (j1.detik >= 60){
        j1.menit = j1.menit + 1;
        j1.detik = j1.detik - 60;
    }
    while (j1.menit >= 60){
        j1.jam = j1.jam + 1;
        j1.menit = j1.menit - 60;
    }

    printf("Jam : %d\n", j1.jam);
    printf("Menit : %d\n", j1.menit);
    printf("Detik : %d\n", j1.detik);
    printf("\n");

    // Inisialisasi j2
    struct Jam j2 = {2, 23, 777};
    while (j2.detik >= 60){
        j2.menit = j2.menit + 1;
        j2.detik = j2.detik - 60;
    }
    while (j2.menit >= 60){
        j2.jam = j2.jam + 1;
        j2.menit = j2.menit - 60;
    }

    printf("Jam : %d\n", j2.jam);
    printf("Menit : %d\n", j2.menit);
    printf("Detik : %d\n", j2.detik);
    printf("\n");

    // Inisialisasi jasil
    struct Jam hasil;
    
    // Operasi j1 + j2
    hasil.jam = j1.jam + j2.jam;
    hasil.menit = j1.menit + j2.menit;
    hasil.detik = j1.detik + j2.detik;

    while (hasil.detik >= 60){
        hasil.menit = hasil.menit + 1;
        hasil.detik = hasil.detik - 60;
    }
    while (hasil.menit >= 60){
        hasil.jam = hasil.jam + 1;
        hasil.menit = hasil.menit - 60;
    }

    printf("Jam : %d\n", hasil.jam);
    printf("Menit : %d\n", hasil.menit);
    printf("Detik : %d\n", hasil.detik);

    return 0;
}