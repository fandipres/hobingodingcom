#include <stdio.h>

int main() {
    int sisi_1, sisi_2, sisi_3, sisi_4, keliling;

    printf("Program Menghitung Keliling Trapesium\n");
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
    // Input Sisi-4
    printf("Input Sisi-4 : ");
    scanf("%d", &sisi_4);

    // Hitung Keliling
    keliling = sisi_1 + sisi_2 + sisi_3 + sisi_4;
    printf("Keliling Trapesium : %d", keliling);
    return 0;
}
