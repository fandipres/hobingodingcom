#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int alas, tinggi;
    float luas;

    printf("Program Menghitung Luas Jajar Genjang\n\n");
    printf("Input Alas   : ");
    scanf("%d", &alas);
    printf("Input Tinggi : ");
    scanf("%d", &tinggi);

    luas = alas * tinggi;
    printf("Luas Jajar Genjang : %.2f cm^2\n", luas);

    getch();
    return 0;
}
