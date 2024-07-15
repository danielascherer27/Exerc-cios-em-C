#include <stdio.h>
int main(){
    float peso, valPag;
    printf("\nDigite o peso do prato em KG:");
    scanf("%f", &peso);
    valPag= peso*12.0;
    printf("\nO valor a pagar eh: R$%.2f\n", valPag);

    return 0;
}