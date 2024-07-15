#include <stdio.h>
#include <stdlib.h>
void distrVet(int vetA[6], int vetB[6], int vetC[6], int vetD[6]) {
    int indC = 0, indD = 0;
    for (int i = 0; i < 6; i++) {
        if (vetA[i] % 2 == 0 && vetB[i] % 2 == 0) {
            vetD[indD++] = vetA[i];
            vetD[indD++] = vetB[i];
        } else {
            vetC[indC++] = vetA[i];
            vetC[indC++] = vetB[i];
        }
    }
}
void exibVet(int vetA[6], int vetB[6], int vetC[6], int vetD[6]){
    printf("Vetor A: ");
    for (int i = 0; i < 6; i++) printf("%d ", vetA[i]);
    printf("\nVetor B: ");
    for (int i = 0; i < 6; i++) printf("%d ", vetB[i]);
    printf("\nVetor C: ");
    for (int i = 0; i < 6; i++) printf("%d ", vetC[i]);
    printf("\nVetor D: ");
    for (int i = 0; i < 6; i++) printf("%d ", vetD[i]);
}
int main() {
    int vetA[6], vetB[6], vetC[6], vetD[6];

    for (int i = 0; i < 6; i++) {
        vetA[i] = rand() % 100;
        vetB[i] = rand() % 100;
    }   
    distrVet(vetA, vetB, vetC, vetD);
    exibVet(vetA, vetB, vetC, vetD);
    return 0;
}
