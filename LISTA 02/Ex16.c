#include <stdio.h>
int main() {
    int quantFrangos;
    float custoChip = 4.00, custoAlimento = 3.50;
    float custoTotal;
    printf("Digite a quantidade de frangos da granja: ");
    scanf("%d", &quantFrangos);
    custoTotal = quantFrangos * (custoChip + 2 * custoAlimento);
    printf("Custo total para marcar os frangos: R$%.2f\n", custoTotal);

    return 0;
}
