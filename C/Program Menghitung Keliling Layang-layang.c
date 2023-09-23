#include <stdio.h>

int main() {
    int sisi_1, sisi_2, keliling;

    printf("Program Menghitung Keliling Layang-layang\n");
    printf("visit us hobingoding.com\n\n");
    // Input Sisi-1
    printf("Input Sisi-1 : ");
    scanf("%d", &sisi_1);
    // Input Sisi-2
    printf("Input Sisi-2 : ");
    scanf("%d", &sisi_2);

    // Hitung Keliling
    keliling = 2 * (sisi_1 + sisi_2);
    printf("Keliling Layang-layang : %d", keliling);
    return 0;
}
