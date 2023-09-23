#include<stdio.h>

int lucas(int a) {
    if(a == 0)
        return (2);
    if(a == 1)
        return (1);
    else
        return lucas(a-1) + lucas(a-2);
}

int main() {
    int panjang_barisan, i;
    int total = 0;

    printf("Program Menampilkan dan Menghitung Barisan Bilangan Lucas\n");
    printf("visit us hobingoding.com\n\n");
    // Input Panjang Barisan
    printf("Input Panjang Barisan : ");
    scanf("%d", &panjang_barisan);

    // Barisan Bilangan Lucas
    printf("Barisan Bilangan Lucas : ");
    for(i = 0; i <= panjang_barisan; i++) {
        printf("%d ", lucas(i));
        total += lucas(i);
    }
    printf("\n");
    printf("Total : %d", total);
    return 0;
}
