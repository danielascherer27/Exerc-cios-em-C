#include <stdio.h>
int main(){
    int quant,inicio,fim=0;
    float media,soma=0;
    printf("Digite o numero do inicio:\n");
    scanf("%i", &inicio);
    printf("Digite o numero do fim:\n");
    scanf("%i", &fim);
    if (inicio<=fim){
        while (inicio<=fim){
            soma+=inicio;
            quant++;
            inicio++;
        }media=soma/quant;
        printf("A media dos dois numeros eh: %.2f",media);    
    }else{
        printf("Digite um numero do inicio maior que do fim.");
    }
    return 0;    
}
