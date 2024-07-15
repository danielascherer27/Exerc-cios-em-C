#include <stdio.h>
void somaLinha(int matriz[4][5], int vetResul[]) {
    for (int i = 0; i < 4; i++) {
        int soma = 0;
        for (int j = 0; j < 5; j++) {
            soma += matriz[i][j];
        }
        vetResul[i] = soma;
    }
}
int main() {
    int matriz[4][5];
    int vetResul[4];
    printf("Digite os elementos da matriz A 4x5:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    somaLinha(matriz, vetResul);
    printf("Soma dos elementos de cada linha da matriz:\n");
    for (int i = 0; i < 4; i++) {
        printf("Linha %d: %d\n", i+1, vetResul[i]);
    }    
    return 0;
}
