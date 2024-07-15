#include <stdio.h>
int somarImparPrin(int matriz[5][5]) {
    int soma = 0;
    for (int i = 1; i < 5; i += 2) {
        soma += matriz[i][i];
    }
    return soma;
}
int main() {
    int matriz[5][5];
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    int soma = somarImparPrin(matriz);
    printf("Somatorio dos elementos nas posicoees impares da diagonal principal: %d\n", soma);
    return 0;
}
