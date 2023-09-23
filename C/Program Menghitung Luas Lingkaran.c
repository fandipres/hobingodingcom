#include <stdio.h>
#define phi 3.14

int main() {
    int r;
    float luas;

    printf("Program Menghitung Luas Lingkaran\n");
    printf("visit us hobingoding.com\n\n");
    // Input Jari-jari
    printf("Input Jari-jari : ");
    scanf("%d", &r);

    // Hitung Luas
    luas = phi * r * r;
    printf("Luas Lingkaran : %.2f", luas);
    return 0;
}
