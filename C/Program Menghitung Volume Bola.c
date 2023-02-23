#include <stdio.h>
//source code by hobingoding.com

int main(){
    int r;
    float phi = 3.14, volume;

    //Input Variabel
    printf("Program Menghitung Volume Bola\n");
    printf("source code by hobingoding.com\n");
    printf("\nInput Jari-jari : ");
    scanf("%d", &r);

    //Menghitung Volume Permukaan
    volume = (4.0 / 3) * phi * r * r * r;
    printf("Volume          : %.2f\n", volume);
    return 0;
}