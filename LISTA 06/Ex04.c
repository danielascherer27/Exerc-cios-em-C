#include <stdio.h>
int main() {
    int quantidade, numero, menor;    
    printf("Quantos numeros voce deseja digitar:\n");
    scanf("%d", &quantidade);
    printf("Digite o 1 numero:\n");
    scanf("%d", &menor);
    for (int cont=2; cont<=quantidade; cont++){
        printf("Digite o %d numero:\n",cont);
        scanf("%d", &numero);
        if (numero < menor){
            menor = numero;
        }
    }
    printf("O menor numero e: %d\n", menor);
    return 0;
}
