#include <stdio.h>

int main() {
    int sisi_1, sisi_2, sisi_3;
    float keliling;

    printf("Program Menghitung Keliling Segitiga\n");
    printf("visit us hobingoding.com\n\n");
    // Input Sisi-1
    printf("Input Sisi-1 : ");
    scanf("%d", &sisi_1);
    // Input Sisi-2
    printf("Input Sisi-2 : ");
    scanf("%d", &sisi_2);
    // Input Sisi-3
    printf("Input Sisi-3 : ");
    scanf("%d", &sisi_3);

    // Hitung Keliling
    keliling = sisi_1 + sisi_2 + sisi_3;
    printf("Keliling Segitiga : %.2f", keliling);
    return 0;
}
