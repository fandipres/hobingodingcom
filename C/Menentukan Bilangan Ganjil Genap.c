#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int angka;

    printf("Program Mengecek Angka Ganjil atau Genap\n\n");
    printf("Angka : ");
    scanf("%d", &angka);

    if(angka % 2 ==0)
        printf("Angka %d merupakan angka Genap.", angka);
    else
        printf("Angka %d merupakan angka Ganjil.", angka);

    getch();
    return 0;
}