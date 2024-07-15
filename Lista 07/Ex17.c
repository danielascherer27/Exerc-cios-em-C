#include <stdio.h>
#include <stdlib.h>
void transfVet(int vetOrig[15], int vetTransf[15]) {
    for (int i = 0; i < 15; i++) {
        vetTransf[i] = (vetOrig[i] % 2 == 0) ? 2 : 1;
    }
}
void exibVet(int vetOrig[15], int vetTransf[15]){
    printf("Vetor Original: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetOrig[i]);
    }
    printf("\nVetor Transformado: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetTransf[i]);
    }
    printf("\n");
}
int main() {
    int vetOrig[15], vetTransf[15];
    for (int i = 0; i < 15; i++) {
        vetOrig[i] = rand() % 100;
    }
    transfVet(vetOrig, vetTransf);
    exibVet(vetOrig, vetTransf);
    return 0;
}
