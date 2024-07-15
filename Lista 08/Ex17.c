#include <stdio.h>
int fat(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int fat = 1;
        for (int i = 2; i <= n; i++) {
            fat *= i;
        }
        return fat;
    }
}
void constMatrizE(int vetorA[], int vetorB[], int vetorC[], int vetorD[], int matrizE[4][4]) {
    for (int i = 0; i < 4; i++) {
        matrizE[0][i] = vetorA[i] * 2;
    } 
    for (int i = 0; i < 4; i++) {
        matrizE[1][i] = vetorB[i] * 3;
    }
    for (int i = 0; i < 4; i++) {
        matrizE[2][i] = vetorC[i] * 4;
    }
    for (int i = 0; i < 4; i++) {
        matrizE[3][i] = fat(vetorD[i]);
    }
}
int main() {
    int vetorA[4], vetorB[4], vetorC[4], vetorD[4];
    int matrizE[4][4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &vetorB[i]);
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &vetorC[i]);
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &vetorD[i]);
    }
    constMatrizE(vetorA, vetorB, vetorC, vetorD, matrizE);  
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matrizE[i][j]);
        }
        printf("\n");
    }
    return 0;
}
