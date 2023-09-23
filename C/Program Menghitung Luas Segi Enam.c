#include <stdio.h>
#include <math.h>

int main() {
    int sisi;
    float luas;

    printf("Program Menghitung Luas Segi Enam\n");
    printf("visit us hobingoding.com\n\n");
    // Input Sisi
    printf("Input Sisi : ");
    scanf("%d", &sisi);

    // Hitung Luas
    luas = (3 * sqrt(3)/2) * sisi * sisi;
    printf("Luas Segi Enam : %.2f", luas);
    return 0;
}
