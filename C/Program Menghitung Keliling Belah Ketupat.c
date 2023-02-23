#include <stdio.h>
//visit us by hobingoding.com

int main(){
    int sisi;
    int keliling;

    //Input Variabel
    printf("Program Menghitung Keliling Belah Ketupat\n\n");
    printf("Sisi\t   : ");
    scanf("%d", &sisi);

    //Menghitung Keliling
    keliling = 4 * sisi;
    printf("Keliling   : %d", keliling);
    return 0;
}