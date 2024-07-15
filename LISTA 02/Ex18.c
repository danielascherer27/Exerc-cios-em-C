#include <stdio.h>
int main() {
    float minhaAltura, minhaSombra, sombraPredio, alturaPredio;
    printf("Digite sua altura e o comprimento da sua sombra (em metros): ");
    scanf("%f %f", &minhaAltura, &minhaSombra);
    printf("Digite o comprimento da sombra do prédio (em metros): ");
    scanf("%f", &sombraPredio);
    alturaPredio = (minhaAltura / minhaSombra) * sombraPredio;
    printf("Altura do prédio: %.2f metros\n", alturaPredio);

    return 0;
}
