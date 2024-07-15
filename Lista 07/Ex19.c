#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void compApost(int aposta[6], int sorteio[6]) {
    int acertos = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (aposta[i] == sorteio[j]) {
                acertos++;
            }
        }
    }
    printf("Numero de acertos: %d\n", acertos);
}
int main() {
    int aposta[6], sorteio[6];
    srand(time(NULL)); 
    printf("Digite seus 6 numeros da aposta:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &aposta[i]);
    }
    printf("Numeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        sorteio[i] = rand() % 60 + 1;
        printf("%d ", sorteio[i]);
    }
    printf("\n");
    compApost(aposta, sorteio);
    return 0;
}
