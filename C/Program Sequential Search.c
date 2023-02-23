#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int banyakData, i, cari;
    int ketemu = 0;

    printf("Pencarian Data dengan Algoritma Sequential Search\n\n");
    printf("Input Banyak Data\t: ");
    scanf("%d", &banyakData);
    int data[banyakData];

    printf("Input Kumpulan Data\t: ");
    for(i = 0; i < banyakData; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("Input Data yang Dicari  : ");
    scanf("%d", &cari);

    for(i = 0; i < banyakData; i++)
    {
        if(cari == data[i])
        {
            ketemu = 1;
            printf("Hasil Pencarian \t: Data Ditemukan pada Indeks ke - %d\n", i);
            break;
        }
    }

    if(ketemu == 0)
        printf("Hasil Pencarian \t  : Data Tidak Ditemukan\n");

    getch();
    return 0;
}
