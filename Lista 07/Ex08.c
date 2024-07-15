#include <stdio.h>
#include <stdlib.h>
void combVet(int arrA[5], int arrB[5], int arrC[5], int arrD[15], int tam) {
    for (int j = 0; j < tam; j++) {
        arrD[j] = arrA[j];
        arrD[j + tam] = arrB[j];
        arrD[j + 2 * tam] = arrC[j];
    }
}
void imprimir(int vetor[], int tam) {
    for (int j = 0; j < tam; j++) {
        printf("%d ", vetor[j]);
    }
    printf("\n");
}
int main() {
    int tam = 5;
    int a[tam], b[tam], c[tam], d[3 * tam];
    for (int j = 0; j < tam; j++) {
        a[j] = rand() % 100;
        b[j] = rand() % 100;
        c[j] = rand() % 100;
    }
    combVet(a, b, c, d, tam);
    printf("Vetor A: ");
    imprimir(a, tam);
    printf("Vetor B: ");
    imprimir(b, tam);
    printf("Vetor C: ");
    imprimir(c, tam);
    printf("Vetor D (A+B+C): ");
    imprimir(d, 3 * tam);
    return 0;
}
