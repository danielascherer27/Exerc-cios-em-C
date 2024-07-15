#include <stdio.h>
int main(){
    int dez, cen, uni, num;
    printf("\nDigite um numero inteiro de 3 digitos:");
    scanf("%i", &num);
    cen = num;
    dez = (num % 100);
    uni = num % 10;
    printf("\nCentena: %d", cen);
    printf("\nDezena: %d", dez);
    printf("\nUnidade: %d", uni);

    return 0;
}