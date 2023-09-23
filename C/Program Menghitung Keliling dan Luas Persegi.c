#include <stdio.h>

int main() {
    int sisi, keliling, luas;

    printf("Program Menghitung Keliling dan Luas Persegi\n");
    printf("visit us hobingoding.com\n\n");
    // Input Sisi
    printf("Input Sisi : ");
    scanf("%d", &sisi);

    // Hitung Keliling
    keliling = 4 * sisi;
    // Hitung Luas
    luas = sisi * sisi;
    printf("Keliling Persegi : %d\n", keliling);
    printf("Luas Persegi : %d", luas);
    return 0;
}
