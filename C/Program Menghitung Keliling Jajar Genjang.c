#include <stdio.h>

int main() {
    int alas, sisi_miring;
    float keliling;

    printf("Program Menghitung Keliling Jajargenjang\n");
    printf("visit us hobingoding.com\n\n");
    // Input Alas
    printf("Input Alas : ");
    scanf("%d", &alas);
    // Input Sisi Miring
    printf("Input Sisi Miring : ");
    scanf("%d", &sisi_miring);

    // Hitung Keliling
    keliling = 2 * (alas + sisi_miring);
    printf("Keliling Jajar Genjang : %.2f", keliling);
    return 0;
}
