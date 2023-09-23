#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    int jumlah_karakter;

    printf("Program Menghitung Jumlah Karakter\n");
    printf("visit us hobingoding.com\n\n");
    // Input Kalimat
    printf("Input Kalimat : ");
    gets(kalimat);

    // Hitung Jumlah Karakter
    jumlah_karakter = strlen(kalimat);
    printf("Jumlah Karakter : %d", jumlah_karakter);
    return 0;
}
