#include <stdio.h>
#define phi 3.14 //Pendeklarasian Nilai Phi
//visit us @hobingoding.com

int main(){
    int r;
    float keliling;

    printf("Program Menghitung Keliling Lingkaran\n\n");
    printf("Input Nilai Jari-jari: ");
    scanf("%d", &r);

    keliling = phi * 2 * r; //Rumus Keliling Lingkaran
    printf("Keliling Lingkaran   : %.2f", keliling);

    getch();
    return 0;
}
