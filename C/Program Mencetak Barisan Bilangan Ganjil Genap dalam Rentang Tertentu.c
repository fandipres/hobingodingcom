#include <stdio.h>

int main() {
    int awal, akhir;

    printf("Program Mencetak Barisan Bilangan Ganjil Genap dalam Rentang Tertentu\n");
    printf("visit us hobingoding.com\n\n");
    // Input Nilai Awal
    printf("Input Nilai Awal : ");
    scanf("%d", &awal);
    // Input Nilai Akhir
    printf("Input Nilai Akhir : ");
    scanf("%d", &akhir);

    // Barisan Bilangan Genap
    printf("Bilangan Genap : ");
    for(int i = awal; i <= akhir; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }

    // Barisan Bilangan Ganjil
    printf("\n");
    printf("Bilangan Ganjil : ");
    for(int i = awal; i <= akhir; i++) {
        if(i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}
