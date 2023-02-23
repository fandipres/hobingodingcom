#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int angka;

    printf("Program Mencetak Barisan Bilangan Ganjil dan Genap\n\n");
    printf("Angka : ");
    scanf("%d", &angka);

    printf("Bilangan Genap : ");
    for(int i = 0; i <= angka; i++){
        if(i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nBilangan Ganjil : ");
    for(int i = 0; i <= angka; i++){
        if(i % 2 != 0)
            printf("%d ", i);
    }

    getch();
    return 0;
}