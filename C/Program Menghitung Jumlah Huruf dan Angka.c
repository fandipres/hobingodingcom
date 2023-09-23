#include <stdio.h>
#include <ctype.h>

int main() {
    char karakter;
    int huruf_besar = 0, huruf_kecil = 0;
    int huruf_vokal = 0, huruf_konsonan = 0;
    int spasi = 0, angka = 0;

    printf("Program Menghitung Jumlah Huruf dan Angka\n");
    printf("visit us hobingoding.com\n\n");
    // Input Kalimat
    printf("Input Kalimat : ");
    while((karakter = getchar())!='\n') {
        // Hitung Huruf dan Angka
        huruf_konsonan++;
        if(karakter >= 'A' && karakter <= 'Z')
            huruf_besar++;
        if(karakter >= 'a' && karakter <= 'z')
            huruf_kecil++;
        if(toupper(karakter) == 'A' || toupper(karakter) == 'I' || toupper(karakter) == 'U' || toupper(karakter) == 'E' || toupper(karakter) == 'O')
            huruf_vokal++;
        if(karakter == ' ')
            spasi++;
        if(karakter >= '0' && karakter <= '9')
            angka++;
    }
    huruf_konsonan -= spasi + angka + huruf_vokal;

    printf("Hasil Penghitungan :\n");
    printf("Kapital : %d\n", huruf_besar);
    printf("Non-Kapital : %d\n", huruf_kecil);
    printf("Vokal : %d\n", huruf_vokal);
    printf("Konsonan : %d\n", huruf_konsonan);
    printf("Angka : %d\n", angka);
    printf("Spasi : %d\n", spasi);
    return 0;
}
