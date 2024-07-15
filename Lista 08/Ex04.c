#include <stdio.h>
void imprimirPrin(int matriz[4][4]) {
    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
}
int main() {
    int matriz[4][4];
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    imprimirPrin(matriz);
    return 0;
}
