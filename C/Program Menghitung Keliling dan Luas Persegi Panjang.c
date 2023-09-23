#include <stdio.h>

int main() {
    int panjang, lebar, keliling, luas;

    printf("Program Menghitung Keliling dan Luas Persegi Panjang\n");
    printf("visit us hobingoding.com\n\n");
    // Input Panjang
    printf("Input Panjang : ");
    scanf("%d", &panjang);
    // Input Lebar
    printf("Input Lebar : ");
    scanf("%d", &lebar);

    // Hitung Keliling
    keliling = (2 * panjang) + (2 * lebar);
    // Hitung Luas
    luas = panjang * lebar;
    printf("Keliling Persegi Panjang : %d\n", keliling);
    printf("Luas Persegi Panjang : %d", luas);
    return 0;
}
