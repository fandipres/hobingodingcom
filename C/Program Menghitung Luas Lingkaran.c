#include <stdio.h>
#define phi 3.14
//visit us @hobingoding.com

int main(){
    int r;
    float luas;

    printf("Program Menghitung Luas Lingkaran\n\n");
    printf("Input Nilai Jari-jari: ");
    scanf("%d", &r);

    luas = phi * r * r;
    printf("Luas Lingkaran       : %.2f", luas);

    getch();
    return 0;
}
