#include <stdio.h>
//source code by hobingoding.com

int main(){
    int panjang, lebar, tinggi, volume;
    
    //Input Variabel
    printf("Program Menghitung Volume Balok\n");
    printf("source code by hobingoding.com\n");
    printf("\nInput Panjang\t: ");
    scanf("%d", &panjang);
    printf("Input Lebar  \t: ");
    scanf("%d", &lebar);
    printf("Input Tinggi \t: ");
    scanf("%d", &tinggi);

    //Menghitung Volume
    volume = panjang * lebar * tinggi;
    printf("Volume Balok \t: %d cm^3\n", volume);
    return 0;
}
