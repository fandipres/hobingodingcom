#include <stdio.h>
//source code by hobingoding.com

int main(){
    int sisi, keliling, luas;

    //Input Variabel
    printf("Program Menghitung Keliling dan Luas Persegi\n");
    printf("source code by hobingoding.com\n");
    printf("\nInput Sisi : ");
    scanf("%d", &sisi);

    //Menghitung Keliling dan Luas
    keliling = 4 * sisi;
    luas = sisi * sisi;
    printf("Keliling   : %d\n", keliling);
    printf("Luas       : %d\n", luas);
    return 0;
}