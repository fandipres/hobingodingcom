#include<stdio.h>
//visit us @hobingoding.com

int lucas(int a)
{
    if(a == 0)
        return (2);
    if(a == 1)
        return (1);
    else
        return lucas(a-1) + lucas(a-2);
}

int main(){
    int banyakBarisan, i;
    int total = 0;

    printf("Program Menampilkan dan Menghitung Barisan Bilangan Lucas\n\n");
    printf("Input n Bilangan Lucas\t: ");
    scanf("%d", &banyakBarisan);

    printf("Barisan Bilangan Lucas\t: ");
    for(i = 0; i <= banyakBarisan; i++)
    {
        printf("%d ", lucas(i));
        total += lucas(i);
    }
    printf("\nTotal Penjumlahan\t: %d\n", total);

    getch();
    return 0;
}