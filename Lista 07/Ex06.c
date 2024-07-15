#include <stdio.h>
#include <stdlib.h>
void combVet(int arrA[15], int arrB[15], int arrC[30], int tam) {
    for (int j = 0; j < tam; j++) {
        arrC[j] = arrA[j];
        arrC[j + tam] = arrB[j];
    }
}

void imprimir(int vetor[], int tam) {
    for (int j = 0; j < tam; j++) {
        printf("%d ", vetor[j]);
    }
    printf("\n");
}
int main() {
    int tam = 15;
    int a[tam], b[tam], c[2 * tam];
    for (int j = 0; j < tam; j++) {
        a[j] = rand() % 100;
        b[j] = rand() % 100;
    }
    combVet(a, b, c, tam);
    printf("Vetor A: ");
    imprimir(a, tam);
    printf("Vetor B: ");
    imprimir(b, tam);
    printf("Vetor C (A + B): ");
    imprimir(c, 2 * tam);
    return 0;
}
