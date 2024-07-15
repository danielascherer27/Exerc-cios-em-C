#include <stdio.h>
#include <stdlib.h>
void invVet(int original[20], int inv[20], int tam) {
    for (int j = 0; j < tam; j++) {
        inv[j] = original[tam - j - 1];
    }
}
void exibVet(int vetorA[20], int vetorB[20]) {
    printf("Vetor A = ");
    for (int j = 0; j < 20; j++) {
        printf("%d ", vetorA[j]);
    }
    printf("\nVetor B = ");
    for (int j = 0; j < 20; j++) {
        printf("%d ", vetorB[j]);
    }
    printf("\n");
}
int main() {
    int tamanho = 20;
    int a[tamanho], b[tamanho];
    for (int j = 0; j < tamanho; j++) {
        a[j] = rand() % 100;
    }
    invVet(a, b, tamanho);
    exibVet(a, b);
    return 0;
}
