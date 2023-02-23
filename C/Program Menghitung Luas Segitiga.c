#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int alas, tinggi;
    float luas;

    printf("Program Menghitung Luas Segitiga\n\n");
    printf("Input Alas \t: ");
    scanf("%d", &alas);
    printf("Input Tinggi \t: ");
    scanf("%d", &tinggi);

    luas = alas * tinggi * 0.5;
    printf("Luas Segitiga \t: %.2f cm^2\n", luas);

    getch();
    return 0;
}
