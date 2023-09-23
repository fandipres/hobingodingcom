#include <stdio.h>

int main() {
    int nilai;

    printf("Program Mengubah Nilai Angka Menjadi Nilai Huruf\n");
    printf("visit us hobingoding.com\n\n");
    // Input Nilai
    printf("Input Nilai : ");
    scanf("%d", &nilai);

    // Ubah Nilai
    if(nilai > 84 && nilai <= 100)
        printf("Nilai Huruf : A");
    else if(nilai > 79 && nilai <= 84)
        printf("Nilai Huruf : A-");
    else if(nilai > 74 && nilai <= 79)
        printf("Nilai Huruf : B+");
    else if(nilai > 69 && nilai <= 74)
        printf("Nilai Huruf : B");
    else if(nilai > 64 && nilai <= 69)
        printf("Nilai Huruf : B-");
    else if(nilai > 59 && nilai <= 64)
        printf("Nilai Huruf : C+");
    else if(nilai > 49 && nilai <= 59)
        printf("Nilai Huruf : C");
    else if(nilai > 39 && nilai <= 49)
        printf("Nilai Huruf: D");
    else if(nilai > 0 && nilai <= 39)
        printf("Nilai Huruf : E");
    else
        printf("MAAF : Masukan Anda Salah");
    return 0;
}
