#include <stdio.h>
void criaTrans(int matrizOrig[4][5], int matrizTrans[5][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matrizTrans[j][i] = matrizOrig[i][j];
        }
    }
}
void imprimirMatriz(int matriz[4][5]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrizOrig[4][5], matrizTrans[5][4];
    printf("Digite os elementos da matriz 4x5:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrizOrig[i][j]);
        }
    }
    criaTrans(matrizOrig, matrizTrans);
    printf("Matriz Transposta:\n");
    imprimirMatriz(matrizTrans);
    return 0;
}
