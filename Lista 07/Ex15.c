#include <stdio.h>
#include <stdlib.h>
void concaVet(int vetA[10], int vetB[10], int vetConca[20]) {
    for (int i = 0; i < 10; i++) {
        vetConca[i] = vetA[i];
        vetConca[i + 10] = vetB[i];
    }
}
void imprimirVet(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main() {
    int vetA[10], vetB[10], vetConca[20];

    for (int i = 0; i < 10; i++) {
        vetA[i] = rand() % 100;
        vetB[i] = rand() % 100;
    }
    concaVet(vetA, vetB, vetConca);
    printf("Vetor A: ");
    imprimirVet(vetA, 10);
    printf("Vetor B: ");
    imprimirVet(vetB, 10);
    printf("Vetor Concatenado (A + B): ");
    imprimirVet(vetConca, 20);
    return 0;
}
