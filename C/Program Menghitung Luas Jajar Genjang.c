#include <stdio.h>

int main() {
    int alas, tinggi;
    float luas;

    printf("Program Menghitung Luas Jajar Genjang\n");
    printf("visit us hobingoding.com\n\n");
    // Input Alas
    printf("Input Alas : ");
    scanf("%d", &alas);
    // Input Tinggi
    printf("Input Tinggi : ");
    scanf("%d", &tinggi);

    // Hitung Luas
    luas = alas * tinggi;
    printf("Luas Jajar Genjang : %.2f", luas);
    return 0;
}
