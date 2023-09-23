#include <stdio.h>

int main() {
    int panjang, lebar, tinggi, luas_permukaan;

    printf("Program Menghitung Luas Permukaan Balok\n");
    printf("visit us hobingoding.com\n\n");
    // Input Panjang
    printf("Input Panjang : ");
    scanf("%d", &panjang);
    // Input Lebar
    printf("Input Lebar : ");
    scanf("%d", &lebar);
    // Input Tinggi
    printf("Input Tinggi : ");
    scanf("%d", &tinggi);

    // Hitung Luas Permukaan
    luas_permukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
    printf("Luas Permukaan Balok : %d", luas_permukaan);
    return 0;
}
