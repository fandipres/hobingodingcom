#include <stdio.h>
//visit us by hobingoding.com

int main(){
    int sisi;
    int keliling;

    //Input Variabel
    printf("Program Menghitung Keliling Segi Enam\n\n");
    printf("Sisi\t   : ");
    scanf("%d", &sisi);

    //Menghitung Keliling
    keliling = 6 * sisi;
    printf("Keliling   : %d", keliling);
    return 0;
}