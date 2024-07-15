#include <stdio.h>
void constMatrizB(int matrizA[6][5], int matrizB[6][5]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrizA[i][j] % 2 == 0) {
                matrizB[i][j] = matrizA[i][j] + 5;
            } else {
                matrizB[i][j] = matrizA[i][j] - 4;
            }
        }
    }
}
void imprimirMatriz(int matriz[6][5]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrizA[6][5], matrizB[6][5];
    printf("Digite os elementos da matriz A 6x5:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    constMatrizB(matrizA, matrizB);
    printf("Matriz A:\n");
    imprimirMatriz(matrizA);
    printf("Matriz B (resultante):\n");
    imprimirMatriz(matrizB);
    return 0;
}
