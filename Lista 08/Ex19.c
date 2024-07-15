#include <stdio.h>
void constMatrizC(int matrizA[12], int matrizB[12], int matrizC[12][2]) {
    for (int i = 0; i < 12; i++) {
        matrizC[i][0] = matrizA[i] * 2;
        matrizC[i][1] = matrizB[i] - 5;
    }
}
void mostMatrizC(int matrizC[12][2]) {
    printf("Matriz C:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d\t%d\n", matrizC[i][0], matrizC[i][1]);
    }
}
int main() {
    int matrizA[12], matrizB[12];
    int matrizC[12][2];
    printf("Digite os elementos da matriz A (12 elementos):\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &matrizA[i]);
    }
    printf("Digite os elementos da matriz B (12 elementos):\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &matrizB[i]);
    }
    constMatrizC(matrizA, matrizB, matrizC);
    mostMatrizC(matrizC);
    return 0;
}
