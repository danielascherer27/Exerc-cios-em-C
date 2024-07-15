#include <stdio.h>
int main() {
    int latas, ga600, ga2L;
    float totalLitros;
    printf("Digite a quantidade de latas, garrafas de 600ml e garrafas de 2 litros compradas: ");
    scanf("%d %d %d", &latas, &ga600, &ga2L);
    totalLitros = latas * 0.35 + ga600 * 0.6 + ga2L * 2;
    printf("Total de litros de refrigerante comprados: %.2f\n", totalLitros);

    return 0;
}
