#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int diagonal1, diagonal2;
    int luas;

    //Input Variabel
    printf("Program Menghitung Luas Layang-layang\n\n");
    printf("Input Diagonal-1 : ");
    scanf("%d", &diagonal1);
    printf("Input Diagonal-2 : ");
    scanf("%d", &diagonal2);

    //Menghitung Luas
    luas = (diagonal1 * diagonal2) / 2;
    printf("Luas             : %d cm^2\n", luas);
    return 0;
}