#include <stdio.h>
#include <stdlib.h>
void calQuad(int arr[15], int quad[15]) {
    for (int j = 0; j < 15; j++) {
        quad[j] = arr[j] * arr[j];
        printf("======\n");
        printf("Valor = %d\n", arr[j]);
        printf("Quadrado = %d\n", quad[j]);
    }
}
int main() {
    int val[15];
    int quadVal[15];
    for (int j = 0; j < 15; j++) {
        val[j] = rand() % 100;
    }
    calQuad(val, quadVal);
    return 0;
}
