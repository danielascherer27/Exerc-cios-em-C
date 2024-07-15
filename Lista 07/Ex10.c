#include <stdio.h>
#include <stdlib.h>
void calMet(float arrA[10], float arrB[10]) {
    for (int j = 0; j < 10; j++) {
        arrB[j] = arrA[j] / 2;
    }
}
void exib(float vetorA[10], float vetorB[10]) {
    printf("Vetor A = ");
    for (int j = 0; j < 10; j++) {
        printf("%.2f ", vetorA[j]);
    }
    printf("\nVetor B = ");
    for (int j = 0; j < 10; j++) {
        printf("%.2f ", vetorB[j]);
    }
    printf("\n");
}
int main() {
    int tam = 10;
    float a[tam], b[tam];
    for (int j = 0; j < tam; j++) {
        a[j] = rand() % 100;
    }
    calMet(a, b);
    exib(a, b);
    return 0;
}
