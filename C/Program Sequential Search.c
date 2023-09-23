#include <stdio.h>

int main() {
    int banyak_data, i, cari;
    int ketemu = 0;

    printf("Pencarian Data dengan Algoritma Sequential Search\n");
    printf("visit us hobingoding.com\n\n");
    // Input Banyak Data
    printf("Input Banyak Data : ");
    scanf("%d", &banyak_data);
    int data[banyak_data];

    // Input Data
    printf("Input Data : ");
    for(i = 0; i < banyak_data; i++) {
        scanf("%d", &data[i]);
    }

    // Input Cari Data
    printf("Input Cari Data : ");
    scanf("%d", &cari);

    // Algoritma Sequential Search
    for(i = 0; i < banyak_data; i++) {
        if(cari == data[i]) {
            ketemu = 1;
            printf("Hasil : Data ditemukan pada indeks ke-%d", i);
            break;
        }
    }

    if(ketemu == 0)
        printf("Hasil : Data tidak ditemukan");
    return 0;
}
