#include <stdio.h>
//source code by hobingoding.com

int main(){
    int panjang, lebar, keliling, luas;

    //Input Variabel
    printf("Program Menghitung Keliling dan Luas Persegi Panjang\n");
    printf("source code by hobingoding.com\n");
    printf("\nInput Panjang\t: ");
    scanf("%d", &panjang);
    printf("Input Lebar  \t: ");
    scanf("%d", &lebar);

    //Menghitung Keliling dan Luas
    keliling = (2 * panjang) + (2 * lebar);
    luas = panjang * lebar;
    printf("Keliling \t: %d\n", keliling);
    printf("Luas \t\t: %d\n", luas);
    return 0;
}
