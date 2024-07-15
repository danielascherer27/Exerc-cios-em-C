#include <stdio.h>
void multPrin(int matriz[4][4], int valor, int vetorResul[]) {
    for (int i = 0; i < 4; i++) {
        vetorResul[i] = matriz[i][i] * valor;
    }
}
void imprimirMatriz(int matriz[4][4]) {
    printf("Matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int valor = 2; 
    int vetorResul[4];    
    multPrin(matriz, valor, vetorResul);
    printf("Matriz Original:\n");
    imprimirMatriz(matriz);
    printf("\nVetor Resultante:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", vetorResul[i]);
    }
    return 0;
}
