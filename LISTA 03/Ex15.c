#include <stdio.h>
//Exercicio 15
int main() {
    int n1, n2;
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2)
        resultado = n1 - n2;
    else if (n2 > n1)
        resultado = n2 - n1;
    else
        resultado = 0;

    printf("O resultado da subtracao do maior pelo menor e: %d\n", resultado);

    return 0;
}
