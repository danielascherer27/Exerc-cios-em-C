#include <stdio.h>
int main() {
    int quantPae, quantBroa;
    float precoPao = 0.12, precoBroa = 1.50, totalVenda, poupanca;
    printf("Digite a quantidade de paes vendidos: ");
    scanf("%d", &quantPae);
    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &quantBroa);
    totalVenda = (quantPae * precoPao) + (quantBroa * precoBroa);
    poupanca = totalVenda * 0.10;
    printf("\nO total arrecadado com a venda de paes e broas: R$%.2f\n", totalVenda);
    printf("\nO valor a ser guardado na conta de poupança: R$%.2f\n", poupanca);

    return 0;
}
