#include <stdio.h>
//source code by hobingoding.com

int main(){
    int panjang, lebar, tinggi, luasPermukaan;

    //Input Variabel
    printf("Program Menghitung Luas Permukaan Balok\n");
    printf("source code by hobingoding.com\n");
    printf("\nInput Panjang\t: ");
    scanf("%d", &panjang);
    printf("Input Lebar  \t: ");
    scanf("%d", &lebar);
    printf("Input Tinggi \t: ");
    scanf("%d", &tinggi);

    //Menghitung Luas Permukaan
    luasPermukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
    printf("Luas Permukaan Balok : %d cm^2\n", luasPermukaan);
    return 0;
}
