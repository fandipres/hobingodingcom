#include<stdio.h>
//visit us @hobingoding.com

int main(){
    int hurufKecil = 97;
    int hurufBesar = 65;
    int n;

    printf("Program Mencetak n Huruf Pertama\n\n");
    printf("Input Nilai n : ");
    scanf("%d", &n);

    if(n < 0 || n > 26)
    {
        printf("SORRY : Nilai n tidak sesuai dengan jumlah alfabet (1 - 26). ");
    }
    else
    {
        printf("Lower Case    : ");
        for(int i = 0; i < n; i++){
            printf("%c ", hurufKecil);
            hurufKecil++;
        }
        printf("\nUpper Case    : ");
        for(int i = 0; i < n; i++){
            printf("%c ", hurufBesar);
            hurufBesar++;
        }
    }

    getch();
    return 0;
}