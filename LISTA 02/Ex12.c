#include <stdio.h>

int main() {
    int quantCP, quantCM, quantCG;
    float valorArrecadado;
    printf("Digite a quantidade de camisetas pequenas:");
    scanf("%d", &quantCP);
    printf("Digite a quantidade de camisetas media:");
    scanf("%d", &quantCM);
    printf("Digite a quantidade de camisetas grandes:");
    scanf("%d", &quantCG);
    valorArrecadado = quantCP * 10 + quantCM * 12 + quantCG * 15;
    printf("Valor arrecadado: R$%.2f\n", valorArrecadado);
    return 0;
}
