#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int sisi1, sisi2, tinggi;
    int luas;

    //Input Variabel
    printf("Program Menghitung Luas Trapesium\n\n");
    printf("Input Sisi-1 : ");
    scanf("%d", &sisi1);
    printf("Input Sisi-2 : ");
    scanf("%d", &sisi2);
    printf("Input Tinggi : ");
    scanf("%d", &tinggi);

    //Menghitung Luas
    luas = (sisi1 + sisi2) * tinggi / 2;
    printf("Luas         : %d cm^2\n", luas);
    return 0;
}