#include <stdio.h>

int main() {
    int panjang, lebar, tinggi, volume;
    
    printf("Program Menghitung Volume Balok\n");
    printf("visit us hobingoding.com\n\n");
    // Input Panjang
    printf("Input Panjang : ");
    scanf("%d", &panjang);
    // Input Lebar
    printf("Input Lebar : ");
    scanf("%d", &lebar);
    // Input Tinggi
    printf("Input Tinggi : ");
    scanf("%d", &tinggi);

    // Hitung Volume
    volume = panjang * lebar * tinggi;
    printf("Volume Balok : %d", volume);
    return 0;
}
