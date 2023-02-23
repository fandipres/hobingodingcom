#include <stdio.h>
//source code by hobingoding.com

int main(){
    int sisi1, sisi2, sisi3, sisi4;
    int keliling;

    //Input Variabel
    printf("Program Menghitung Keliling Trapesium\n\n");
    printf("Input Sisi-1 : ");
    scanf("%d", &sisi1);
    printf("Input Sisi-2 : ");
    scanf("%d", &sisi2);
    printf("Input Sisi-3 : ");
    scanf("%d", &sisi3);
    printf("Input Sisi-4 : ");
    scanf("%d", &sisi4);

    //Menghitung Keliling
    keliling = sisi1 + sisi2 + sisi3 + sisi4;
    printf("Keliling     : %d\n", keliling);
    return 0;
}