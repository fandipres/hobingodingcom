#include <stdio.h>

int main() {
    int n;

    printf("Program Mencetak Barisan Bilangan Ganjil Genap\n");
    printf("visit us hobingoding.com\n\n");
    // Input Nilai
    printf("Input Nilai n : ");
    scanf("%d", &n);

    // Barisan Bilangan Genap
    printf("Bilangan Genap : ");
    for(int i = 0; i <= n; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }

    // Barisan Bilangan Ganjil
    printf("\n");
    printf("Bilangan Ganjil : ");
    for(int i = 0; i <= n; i++) {
        if(i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}
