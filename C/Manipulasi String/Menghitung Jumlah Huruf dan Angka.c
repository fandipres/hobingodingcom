#include <stdio.h>
#include <ctype.h>
//visit us @hobingoding.com

int main(){
    char karakter;
    int hurufBesar = 0, hurufKecil = 0;
    int hurufVokal = 0, hurufKonsonan = 0;
    int spasi = 0, angka = 0;

    printf("Program Menghitung Jumlah Karakter\n\n");
    printf("Input String : ");
    while((karakter = getchar())!='\n')
    {
        hurufKonsonan++;
        if(karakter >= 'A' && karakter <= 'Z')
            hurufBesar++;
        if(karakter >= 'a' && karakter <= 'z')
            hurufKecil++;
        if(toupper(karakter) == 'A' || toupper(karakter) == 'I' || toupper(karakter) == 'U' || toupper(karakter) == 'E' || toupper(karakter) == 'O')
            hurufVokal++;
        if(karakter == ' ')
            spasi++;
        if(karakter >= '0' && karakter <= '9')
            angka++;
    }
    hurufKonsonan -= (spasi + angka + hurufVokal);

    printf("Hasil Penghitungan :\n");
    printf("Kapital     : %d\n", hurufBesar);
    printf("Non-Kapital : %d\n", hurufKecil);
    printf("Vokal       : %d\n", hurufVokal);
    printf("Konsonan    : %d\n", hurufKonsonan);
    printf("Angka       : %d\n", angka);
    printf("Spasi       : %d\n", spasi);
    getch();
    return 0;
}