#include <stdio.h>
#include <stdlib.h>
void procesVet(int vetOrig[12], int vetProces[12]) {
    for (int i = 0; i < 12; i++) {
        if (vetOrig[i] % 2 == 0) {
            vetProces[i] = vetOrig[i];
        } else {
            vetProces[i] = vetOrig[i] * 2;
        }
    }
}
void exibVet(int vetOrig[12], int vetProces[12]){
    for (int i = 0; i < 12; i++) {
        printf("Original: %d, Processado: %d\n", vetOrig[i], vetProces[i]);
    }
}
int main() {
    int vetOrig[12], vetProces[12];
    for (int i = 0; i < 12; i++) {
        vetOrig[i] = rand() % 100;
    }
    procesVet(vetOrig, vetProces);
    exibVet(vetOrig, vetProces);

    return 0;
}
