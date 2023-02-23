#include <stdio.h>
//visit us by hobingoding.com

int main(){
    int diagonal1, diagonal2;
    int luas;

    //Input Variabel
    printf("Program Menghitung Luas Belah Ketupat\n\n");
    printf("Diagonal 1 : ");
    scanf("%d", &diagonal1);
    printf("Diagonal 2 : ");
    scanf("%d", &diagonal2);

    //Menghitung Luas
    luas = 0.5 * diagonal1 * diagonal2;
    printf("Luas       : %d cm^2", luas);
    return 0;
}
