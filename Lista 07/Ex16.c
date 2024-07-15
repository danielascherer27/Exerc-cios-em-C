#include <stdio.h>
int contNeg(int vetor[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0) {
            contador++;
        }
    }
    return contador;
}
int main() {
    int vetor[6];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int neg = contNeg(vetor, 6);
    printf("O vetor contem %d elementos negativos.\n", neg);    
    return 0;
}
