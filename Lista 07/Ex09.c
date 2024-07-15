#include <stdio.h>
#include <stdlib.h>
void calInv(int orig[10], int inv[10]) {
    for (int j = 0; j < 10; j++) {
        inv[j] = -orig[j];
    }
}
void exib(int vetorA[10], int vetorB[10]) {
    printf("Vetor A = ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", vetorA[j]);
    }
    printf("\nVetor B = ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", vetorB[j]);
    }
    printf("\n");
}
int main() {
    int tam = 10;
    int a[tam], b[tam];
    for (int j = 0; j < tam; j++) {
        a[j] = rand() % 100;
    }
    calInv(a, b);
    exib(a, b);
    return 0;
}
