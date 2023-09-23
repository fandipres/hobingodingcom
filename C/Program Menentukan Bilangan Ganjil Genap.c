#include <stdio.h>

int main(){
    int bilangan;

    printf("Program Menentukan Bilangan Ganjil Genap\n");
    printf("visit us hobingoding.com\n\n");
    // Input Bilangan
    printf("Input Bilangan : ");
    scanf("%d", &bilangan);

    // Cek Ganjil Genap
    if(bilangan % 2 ==0)
        printf("Hasil : Bilangan Genap");
    else
        printf("Hasil : Bilangan Ganjil");
    return 0;
}
