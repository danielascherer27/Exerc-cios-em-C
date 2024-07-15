#include <stdio.h>
int somarParPrin(int matriz[15][15]) {
    int soma = 0;
    for (int i = 0; i < 15; i++) {
        if (matriz[i][i] % 2 == 0) {
            soma += matriz[i][i];
        }
    }
    return soma;
}
int main() {
    int matriz[15][15];
    printf("Digite os elementos da matriz 15x15:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    int soma = somarParPrin(matriz);
    printf("Somatorio dos elementos pares na diagonal principal: %d\n", soma);
    return 0;
}
