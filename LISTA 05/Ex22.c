#include <stdio.h>
int main(){
    int cont=0,menu, num, numero, soma=0, quantnum=0;
        printf("Digite a quantidade de numeros que voce deseja somar:\n"); 
        scanf("%i", &num);
        while (cont<num){ 
            printf("\nDigite o numero:\n");
            scanf("%i", &numero);
            if (numero>=10){
                soma=soma+numero;
            } else if (numero<10){
                quantnum=quantnum+1;
            }
            cont++;
        }        
        printf("A soma dos numeros positivos eh: %i\n", soma);
        printf("\nA quantidade de numeros menores que 10 eh: %i", quantnum);
    return 0;    
}