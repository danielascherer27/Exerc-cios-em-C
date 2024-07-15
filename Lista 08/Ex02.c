#include <stdio.h>
void encontrVal(int matriz[4][3], int valor) {
    printf("Posições do valor %d:\n", valor);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == valor) {
                printf("Posicao [%d][%d]\n", i, j);
            }
        }
    }
}
int main() {
    int matriz[4][3];
    int valor;
    printf("Digite os elementos da matriz 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite um valor para encontrar na matriz: ");
    scanf("%d", &valor);
    encontrVal(matriz, valor);
    return 0;
}
