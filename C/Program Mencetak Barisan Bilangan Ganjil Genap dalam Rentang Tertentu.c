#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int batasBawah;
    int batasAtas;

    printf("Program Mencetak Barisan Bilangan Ganjil dan Genap dalam Rentang Tertentu\n\n");
    printf("Batas Bawah : ");
    scanf("%d", &batasBawah);
    printf("Batas Atas : ");
    scanf("%d", &batasAtas);

    printf("Bilangan Genap : ");
    for(int i = batasBawah; i <= batasAtas; i++){
        if(i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nBilangan Ganjil : ");
    for(int i = batasBawah; i <= batasAtas; i++){
        if(i % 2 != 0)
            printf("%d ", i);
    }

    getch();
    return 0;
}