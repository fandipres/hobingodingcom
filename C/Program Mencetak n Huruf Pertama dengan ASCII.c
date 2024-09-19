#include <stdio.h>

int main() {
    int huruf_kecil = 97;
    int huruf_besar = 65;
    int n;

    printf("Program Mencetak N Huruf Pertama\n");
    printf("visit us hobingoding.com\n\n");
    // Input Nilai
    printf("Input Nilai N : ");
    scanf("%d", &n);

    // Cetak Nilai
    if(n < 0 || n > 26) {
        printf("Maaf : Nilai N tidak sesuai dengan jumlah alfabet (1-26)");
    }
    else {
        printf("Lower Case : ");
        for(int i = 0; i < n; i++) {
            printf("%c ", huruf_kecil);
            huruf_kecil++;
        }
        printf("\n");
        printf("Upper Case : ");
        for(int i = 0; i < n; i++) {
            printf("%c ", huruf_besar);
            huruf_besar++;
        }
    }
    return 0;
}
