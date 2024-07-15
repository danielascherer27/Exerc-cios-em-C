#include <stdio.h>
void contarValoresNosIntervalos(int *intervalo1, int *intervalo2, int *intervalo3, int *intervalo4);
void exibirResultados(int intervalo1, int intervalo2, int intervalo3, int intervalo4);
int main() {
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    contarValoresNosIntervalos(&intervalo1, &intervalo2, &intervalo3, &intervalo4);
    exibirResultados(intervalo1, intervalo2, intervalo3, intervalo4);
    return 0;
}
void contarValoresNosIntervalos(int *intervalo1, int *intervalo2, int *intervalo3, int *intervalo4) {
    int valor;
    printf("Digite 15 valores, um de cada vez:\n");
    for (int cont = 1; cont <= 15; cont++) {
        printf("\nDigite o %d o valor: ", cont);
        scanf("%d", &valor);
        if (valor >= 0 && valor <= 25) {
            (*intervalo1)++;
        } else if (valor >= 26 && valor <= 50) {
            (*intervalo2)++;
        } else if (valor >= 51 && valor <= 75) {
            (*intervalo3)++;
        } else if (valor >= 76 && valor <= 100) {
            (*intervalo4)++;
        }
    }
}
void exibirResultados(int intervalo1, int intervalo2, int intervalo3, int intervalo4) {
    printf("\nValores no intervalo 0-25: %d\n", intervalo1);
    printf("Valores no intervalo 26-50: %d\n", intervalo2);
    printf("Valores no intervalo 51-75: %d\n", intervalo3);
    printf("Valores no intervalo 76-100: %d\n", intervalo4);
}
