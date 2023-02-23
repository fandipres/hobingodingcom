#include <stdio.h>
//visit us @hobingoding.com

int main(){
    int alas, sisimiring;
    float keliling;

    printf("Program Menghitung Keliling Jajargenjang\n\n");
    printf("Input Alas \t  : ");
    scanf("%d", &alas);
    printf("Input Sisi Miring : ");
    scanf("%d", &sisimiring);

    keliling = 2 * (alas + sisimiring);
    printf("Keliling Jajar Genjang : %.2f cm\n", keliling);

    getch();
    return 0;
}
