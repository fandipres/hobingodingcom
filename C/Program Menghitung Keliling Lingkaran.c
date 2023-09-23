#include <stdio.h>
#define phi 3.14

int main() {
    int r;
    float keliling;

    printf("Program Menghitung Keliling Lingkaran\n");
    printf("visit us hobingoding.com\n\n");
    // Input Jari-jari
    printf("Input Jari-jari : ");
    scanf("%d", &r);

    // Hitung Keliling
    keliling = phi * 2 * r;
    printf("Keliling Lingkaran : %.2f", keliling);
    return 0;
}
