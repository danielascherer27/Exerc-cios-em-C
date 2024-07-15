#include <stdio.h>
void somaMatriz(int matrizA[4][6], int matrizB[4][6], int matrizSoma[4][6], int matrizDiferenca[4][6]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            matrizDiferenca[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}
void imprimirMatriz(int matriz[4][6]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrizA[4][6], matrizB[4][6], matrizSoma[4][6], matrizDiferenca[4][6];
    printf("Digite os elementos da matriz A 4x6:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Digite os elementos da matriz B 4x6:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }
    somaMatriz(matrizA, matrizB, matrizSoma, matrizDiferenca);
    printf("Matriz A:\n");
    imprimirMatriz(matrizA);
    printf("Matriz B:\n");
    imprimirMatriz(matrizB);
    printf("Matriz Soma (A + B):\n");
    imprimirMatriz(matrizSoma);
    printf("Matriz Diferença (A - B):\n");
    imprimirMatriz(matrizDiferenca);
    return 0;
}
