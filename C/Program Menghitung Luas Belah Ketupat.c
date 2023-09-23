#include <stdio.h>

int main() {
    int diagonal_1, diagonal_2, luas;

    printf("Program Menghitung Luas Belah Ketupat\n");
    printf("visit us hobingoding.com\n\n");
    // Input Diagonal-1
    printf("Input Diagonal-1 : ");
    scanf("%d", &diagonal_1);
    // Input Diagonal-2
    printf("Input Diagonal-2 : ");
    scanf("%d", &diagonal_2);

    // Hitung Luas
    luas = 0.5 * diagonal_1 * diagonal_2;
    printf("Luas Belah Ketupat : %d", luas);
    return 0;
}
