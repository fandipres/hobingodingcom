#include <stdio.h>
// visit us @hobingoding.com

int main(){
    int angka;

    printf("Program Mengecek Angka Ganjil atau Genap\n\n");
    // Input Angka
    printf("Angka : ");
    scanf("%d", &angka);

    // Pengecekan Angka
    if(angka % 2 ==0)
        printf("Angka %d merupakan angka Genap.", angka);
    else
        printf("Angka %d merupakan angka Ganjil.", angka);

    getch();
    return 0;
}
