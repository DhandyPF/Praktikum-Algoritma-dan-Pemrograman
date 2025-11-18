#include <stdio.h>

    //Fungsi
    void rata2(){
        int i, n, nilai, total = 0;
        float rata;

        // Meminta Input Jumlah Bilangan Dari User
        printf("Masukan Jumlah Bilangan : ");
        scanf("%i", &n);

        // User Memasukkan Nilai
        for (int i = 0; i <= n; i++){
            printf("Masukan Nilai ke-%i : ", i + 1);
            scanf("%i", &nilai);
            total += nilai;
        }

        // Rumus
        rata = (float) total / n;

        printf("Rata-Rata = %.2f\n", rata);
    }

int main(){
    rata2();
    return 0;
}