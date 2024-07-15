#include <stdio.h>
void convertF(int matrizA[4][5], float matrizB[4][5]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matrizB[i][j] = matrizA[i][j] * 9.0 / 5.0 + 32;
        }
    }
}
void imprimirMatrizInt(int matriz[4][5]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void imprimirMatrizF(float matriz[4][5]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrizA[4][5];
    float matrizB[4][5];
    printf("Digite os elementos da matriz A 4x5 (em graus Celsius):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    convertF(matrizA, matrizB);
    printf("Matriz A (Celsius):\n");
    imprimirMatrizInt(matrizA);
    printf("Matriz B (Fahrenheit):\n");
    imprimirMatrizF(matrizB);
    return 0;
}
