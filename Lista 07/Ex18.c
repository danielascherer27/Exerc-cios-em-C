#include <stdio.h>
void analiVet(int vetor[12]) {
    int maior = vetor[0], menor = vetor[0], soma = 0;
    for (int i = 0; i < 12; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        soma += vetor[i];
    }
    float media = soma / 12.0;
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    printf("Média dos elementos: %.2f\n", media);
}
int main() {
    int vetor[12];
    printf("Digite 12 numeros:\n");
    for (int i = 0; i < 12; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    analiVet(vetor);
    return 0;
}
