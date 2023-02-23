#include <stdio.h>
//source code by hobingoding.com

int main(){
    int r;
    float phi = 3.14, luasPermukaan;

    //Input Variabel
    printf("Program Menghitung Luas Permukaan Bola\n");
    printf("source code by hobingoding.com\n");
    printf("\nInput Jari-jari : ");
    scanf("%d", &r);

    //Menghitung Luas Permukaan
    luasPermukaan = 4 * phi * r * r;
    printf("Luas Permukaan  : %.2f\n", luasPermukaan);
    return 0;
}