#include <stdio.h>

int main() {
    int banyak_data, i, j;

    printf("Pengurutan Data dengan Algoritma Insertion Sort\n");
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

    // Algoritma Insertion Sort
    for(i = 0; i < banyak_data; i++) {
        for(j = i; j > 0 && data[j] < data[j-1]; j--) {
           int temp = data[j-1];
           data[j-1] = data[j];
           data[j] = temp;
        }
    }

    // Hasil Pengurutan Data
    printf("Hasil Pengurutan Data : ");
    for (i = 0; i < banyak_data; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}
