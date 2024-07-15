#include <stdio.h>

void somarCol(int matriz[8][6], int vetorResul[]) {
    for (int j = 0; j < 6; j++) {
        int soma = 0;
        for (int i = 0; i < 8; i++) {
            soma += matriz[i][j];
        }
        vetorResul[j] = soma;
    }
}

void imprimirVet(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int matriz[8][6]; 
    int vetResul[6]; 
    
    printf("Digite os elementos da matriz A 8x6:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    somarCol(matriz, vetResul);
    imprimirVet(vetResul, 6);
    
    return 0;
}
