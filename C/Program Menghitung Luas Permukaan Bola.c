#include <stdio.h>

int main() {
    int r;
    float phi = 3.14, luas_permukaan;

    printf("Program Menghitung Luas Permukaan Bola\n");
    printf("visit us hobingoding.com\n\n");
    // Input Jari-jari
    printf("Input Jari-jari : ");
    scanf("%d", &r);

    // Hitung Luas Permukaan
    luas_permukaan = 4 * phi * r * r;
    printf("Luas Permukaan Bola : %.2f", luas_permukaan);
    return 0;
}
