#include <stdio.h>
int main() {
    int quantidade, numero, negativos = 0;
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &quantidade);
    int i = 0;
    while (i < quantidade) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        if (numero < 0) {
            negativos++;
        }    
        i++;
    }
    printf("Total de numeros negativos: %d\n", negativos);
    return 0;
}