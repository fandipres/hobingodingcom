#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int sisi1, sisi2, sisi3;
    float keliling;

    printf("Program Menghitung Keliling Segitiga\n\n");
    printf("Input Sisi - 1 : ");
    scanf("%d", &sisi1);
    printf("Input Sisi - 2 : ");
    scanf("%d", &sisi2);
    printf("Input Sisi - 3 : ");
    scanf("%d", &sisi3);

    keliling = sisi1 + sisi2 + sisi3;
    printf("Keliling Segitiga : %.2f cm\n", keliling);

    getch();
    return 0;
}
