#include <stdio.h>
void constMatrizB(int matrizA[5][5], int matrizB[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matrizB[i][j] = matrizA[i][j] * 3;
            } else {
                matrizB[i][j] = matrizA[i][j] * 2;
            }
        }
    }
}
void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrizA[5][5], matrizB[5][5];
    printf("Digite os elementos da matriz A 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    constMatrizB(matrizA, matrizB);
    printf("Matriz B (resultante):\n");
    imprimirMatriz(matrizB);
    return 0;
}
