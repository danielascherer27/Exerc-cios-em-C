#include <stdio.h>
void multMatriz(int matriz[6][6], int valor) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] *= valor;
        }
    }
}
void imprimirMatriz(int matriz[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matriz[6][6];
    int valor;
    printf("Digite os elementos da matriz 6x6:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite um valor para multiplicar a matriz: ");
    scanf("%d", &valor);
    multMatriz(matriz, valor);
    printf("Matriz resultante:\n");
    imprimirMatriz(matriz);
    return 0;
}
