#include <stdio.h>

int main() {
    int banyak_data, i, j;

    printf("Pengurutan Data dengan Algoritma Bubble Sort\n");
    printf("visit us hobingoding.com\n\n");
    // Input Banyak Data
    printf("Input Banyak Data : ");
    scanf("%d", &banyak_data);
    int data[banyak_data];

    // Input Data
    printf("Input Data : ");
    for(i = 0; i < banyak_data; i++) {
        scanf("%d", &data[i]);
    }

    // Algoritma Bubble Sort
    for(i = 0; i < banyak_data; i++) {
        for(j = 0; j < banyak_data-i-1; j++) {
            if(data[j] > data[j+1]) {
                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }

    // Hasil Pengurutan Data
    printf("Hasil : ");
    for (i = 0; i < banyak_data; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}
