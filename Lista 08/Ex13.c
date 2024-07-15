#include <stdio.h>
int fat(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        int resultado = 1;
        for (int i = 2; i <= num; i++) {
            resultado *= i;
        }
        return resultado;
    }
}
void constMatrizB(int matrizA[5][4], int matrizB[5][4]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            matrizB[i][j] = fat(matrizA[i][j]);
        }
    }
}
void imprimirMatriz(int matriz[5][4]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrizA[5][4], matrizB[5][4];
    printf("Digite os elementos da matriz A 5x4:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    constMatrizB(matrizA, matrizB);
    printf("Matriz A:\n");
    imprimirMatriz(matrizA);
    printf("\nMatriz B (fatoriais de elementos correspondentes):\n");
    imprimirMatriz(matrizB);
    return 0;
}
