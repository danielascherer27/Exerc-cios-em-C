#include <stdio.h>
void divMaior(int matriz[6][3]) {
    int maior = matriz[0][0];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] /= maior;
        }
    }
}
void mostMatriz(int matriz[6][3]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matriz[6][3];
    printf("Digite os elementos da matriz 6x3:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    divMaior(matriz);
    printf("\nMatriz modificada:\n");
    mostMatriz(matriz);
    return 0;
}
