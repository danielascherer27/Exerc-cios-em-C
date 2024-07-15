#include <stdio.h>
//Exercicio 13
int main() {
    int n1, n2;
    char operacao;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+')
        resultado = n1 + n2;
    else if (operacao == '-')
        resultado = n1 - n2;
    else if (operacao == '*')
        resultado = n1 * n2;
    else if (operacao == '/')
        resultado = (float) n1 / n2;
    else {
        printf("Operacao invalida.\n");
        return 1;
    }

    printf("O resultado da operacao e: %.2f\n", resultado);

    return 0;
}
