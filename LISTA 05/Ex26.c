#include <stdio.h>
int main(){
    int cod, quant, cal;
    printf("1= Cachorro quente / 2,50");
    printf("2= X Salada / 3,00");
    printf("3= X Tudo / 3,50");
    printf("4= Refrigerante / 2,50");
    printf("Digite o codigo do produto que voce deseja comprar:\n");
    scanf("%i", &cod);
    if (cod==1){
        printf("Quantos voce Cachorros quentes que voce deseja comprar?\n");
        scanf("%ii", &quant);
        cal=quant*2.50;
    }
    return 0;    
}