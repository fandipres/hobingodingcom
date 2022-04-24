#include <stdio.h>
#include <math.h>
//visit us by hobingoding.com

int main(){
    int sisi;
    float luas;

    //Input Variabel
    printf("Program Menghitung Luas Segi Enam\n\n");
    printf("Sisi   : ");
    scanf("%d", &sisi);

    //Menghitung Luas
    luas = (3 * sqrt(3)/2) * sisi * sisi;
    printf("Luas   : %.2f cm^2", luas);
    return 0;
}
