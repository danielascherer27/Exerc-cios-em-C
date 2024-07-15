#include <stdio.h>
void calcularSoma(int matriz[5][5]) {
    int soma4Linha = 0;
    int soma2Coluna = 0;
    int somaPrinc = 0;
    int somaTotal = 0;
    for (int j = 0; j < 5; j++) {
        soma4Linha += matriz[3][j];
    }
    for (int i = 0; i < 5; i++) {
        soma2Coluna += matriz[i][1];
    }
    for (int i = 0; i < 5; i++) {
        somaPrinc += matriz[i][i];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            somaTotal += matriz[i][j];
        }
    }
    printf("%d\n", soma4Linha);
    printf("%d\n", soma2Coluna);
    printf("%d\n", somaPrinc);
    printf("%d\n", somaTotal);
}
int main() {
    int matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    calcularSoma(matriz);
    return 0;
}
