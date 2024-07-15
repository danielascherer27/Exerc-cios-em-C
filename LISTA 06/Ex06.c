#include <stdio.h>
#include <math.h>
int main() {
    float valor;
    for (int sent=1; sent==1;){
        printf("\nDigite um valor: (-1 para encerrar)\n");
        scanf("%f",&valor);
        if (valor==-1)
        {
            printf("Voce saiu!");
            sent=0;
            break;
        }
        printf("\nValor: %.2f\n", valor);
        printf("Quadrado: %.2f\n", valor * valor);
        printf("Cubo: %.2f\n", valor * valor * valor);
        printf("Raiz Quadrada: %.2f\n", sqrt(valor));
    }
    return 0;
}
