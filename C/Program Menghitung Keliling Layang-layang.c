#include <stdio.h>
//source code by hobingoding.com

int main(){
    int sisi1, sisi2;
    int keliling;

    //Input Variabel
    printf("Program Menghitung Keliling Layang-layang\n\n");
    printf("Input Sisi-1 : ");
    scanf("%d", &sisi1);
    printf("Input Sisi-2 : ");
    scanf("%d", &sisi2);

    //Menghitung Keliling
    keliling = 2 * (sisi1 + sisi2);
    printf("Keliling     : %d\n", keliling);
    return 0;
}