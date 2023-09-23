#include <stdio.h>

int main() {
    int r;
    float phi = 3.14, volume;

    printf("Program Menghitung Volume Bola\n");
    printf("visit us hobingoding.com\n\n");
    // Input Jari-jari
    printf("Input Jari-jari : ");
    scanf("%d", &r);

    // Hitung Volume
    volume = (4.0 / 3) * phi * r * r * r;
    printf("Volume Bola : %.2f", volume);
    return 0;
}
