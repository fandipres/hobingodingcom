#include <stdio.h>

int main() {
    int alas, tinggi;
    float luas;

    printf("Program Menghitung Luas Segitiga\n");
    printf("visit us hobingoding.com\n\n");
    // Input Alas
    printf("Input Alas : ");
    scanf("%d", &alas);
    // Input Tinggi
    printf("Input Tinggi : ");
    scanf("%d", &tinggi);
    
    // Hitung Luas
    luas = alas * tinggi * 0.5;
    printf("Luas Segitiga : %.2f", luas);
    return 0;
}
