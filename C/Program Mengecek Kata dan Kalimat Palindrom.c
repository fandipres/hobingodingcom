#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kata[50] = {'\0'};
    char temp[50] = {'\0'};
    int n, i, j = 0;

    printf("Program Mengecek Kata dan Kalimat Palindrom\n");
    printf("visit us hobingoding.com\n\n");
    // Input Kata
    printf("Input Kata : ");
    gets(kata);
    n = strlen(kata);

    // Ubah Kata Menjadi Lower Case
    for(i = 0; kata[i]; i++) {
        kata[i] = tolower(kata[i]);
    }

    // Balik Kata
    for(i = n-1; i >= 0; i--) {
        temp[j] = kata[i];
        j++;
    }

    // Cek Palindrom
    if(strcmp(kata, temp) == 0)
        printf("Hasil : Palindrom");
    else
        printf("Hasil : Bukan Palindrom");
    return 0;
}
