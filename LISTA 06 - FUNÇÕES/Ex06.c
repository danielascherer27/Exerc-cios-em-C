#include <stdio.h>
#include <math.h>
void calcularEExibirPropriedades(float valor);
int main() {
    float valor;
    while (1) {
        printf("\nDigite um valor: (-1 para encerrar)\n");
        scanf("%f", &valor);
        if (valor == -1) {
            printf("Voce saiu!\n");
            break;
        }
        calcularEExibirPropriedades(valor);
    }
    return 0;
}
void calcularEExibirPropriedades(float valor) {
    printf("\nValor: %.2f\n", valor);
    printf("Quadrado: %.2f\n", valor * valor);
    printf("Cubo: %.2f\n", valor * valor * valor);
    printf("Raiz Quadrada: %.2f\n", sqrt(valor));
}
