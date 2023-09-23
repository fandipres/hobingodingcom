#include <stdio.h>

int main() {
    int diagonal_1, diagonal_2;
    int luas;

    printf("Program Menghitung Luas Layang-layang\n");
    printf("visit us hobingoding.com\n\n");
    // Input Diagonal-1
    printf("Input Diagonal-1 : ");
    scanf("%d", &diagonal_1);
    // Input Diagonal-2
    printf("Input Diagonal-2 : ");
    scanf("%d", &diagonal_2);

    // Hitung Luas
    luas = (diagonal_1 * diagonal_2) / 2;
    printf("Luas Layang-layang : %d", luas);
    return 0;
}
