#include <stdio.h>
#include <string.h>
//visit us @hobingoding.com

int main(){
    char kalimat[100];
    int jumlahKarakter;

    printf("Program Menghitung Jumlah Karakter\n\n");
    printf("Input String : ");
    gets(kalimat);

    jumlahKarakter = strlen(kalimat);
    printf("Jumlah Karakter : %d", jumlahKarakter);

    getch();
    return 0;
}