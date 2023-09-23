#include <stdio.h>

int main() {
    int sisi_1, sisi_2, tinggi, luas;

    printf("Program Menghitung Luas Trapesium\n");
    printf("visit us hobingoding.com\n\n");
    // Input Sisi-1
    printf("Input Sisi-1 : ");
    scanf("%d", &sisi_1);
    // Input Sisi-2
    printf("Input Sisi-2 : ");
    scanf("%d", &sisi_2);
    // Input Tinggi
    printf("Input Tinggi : ");
    scanf("%d", &tinggi);

    // Hitung Luas
    luas = (sisi_1 + sisi_2) * tinggi / 2;
    printf("Luas Trapesium : %d", luas);
    return 0;
}
