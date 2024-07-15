#include <stdio.h>
#include <stdlib.h>
void calDifere(int vetorA[20], int vetorB[20], int vetorD[20]) {
    for (int j = 0; j < 20; j++) {
        vetorD[j] = vetorA[j] - vetorB[j];
        printf("======\n");
        printf("Valor A = %d\n", vetorA[j]);
        printf("Valor B = %d\n", vetorB[j]);
        printf("Diferenca (A - B) = %d\n", vetorD[j]);
    }
}
int main() {
    int a[20], b[20], d[20];
    for (int j = 0; j < 20; j++) {
        a[j] = rand() % 100;
        b[j] = rand() % 100;
    }
    calDifere(a, b, d);
    return 0;
}
