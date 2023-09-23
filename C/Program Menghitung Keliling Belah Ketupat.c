#include <stdio.h>

int main() {
    int sisi, keliling;

    printf("Program Menghitung Keliling Belah Ketupat\n");
    printf("visit us hobingoding.com\n\n");
    // Input Sisi
    printf("Input Sisi : ");
    scanf("%d", &sisi);

    // Hitung Keliling
    keliling = 4 * sisi;
    printf("Keliling Belah Ketupat : %d", keliling);
    return 0;
}
