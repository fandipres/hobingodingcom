#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int banyakData, i, j;

    printf("Pengurutan Data dengan Algoritma Bubble Sort\n\n");
    printf("Input Banyak Data \t: ");
    scanf("%d", &banyakData);
    int data[banyakData];

    //Perulangan untuk menginput data sebanyak n
    printf("Data yang Belum Berurut : ");
    for(i = 0; i < banyakData; i++)
    {
        scanf("%d", &data[i]);
    }

    //Algoritma Bubble Sort
    for(i = 0; i < banyakData; i++)
    {
        for(j = 0; j < banyakData-i-1; j++)
        {
            if(data[j] > data[j+1])
            {
                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }

    //Pencetakan data yang sudah diurutkan
    printf("Hasil Pengurutan Data   : ");
    for (i = 0; i < banyakData; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    getch();
    return 0;
}
