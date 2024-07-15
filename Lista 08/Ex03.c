#include <stdio.h>
void imprimirPar(int matriz[2][5]) {
    printf("Elementos pares:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");
}
int main() {
    int matriz[2][5];
    printf("Digite os elementos da matriz 2x5:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    imprimirPar(matriz);
    return 0;
}
