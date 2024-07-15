#include <stdio.h>
int main(){
    int cont=0, num, numero, soma=0;
    printf("Digite a quantidade numeros que voce deseja somar:\n");
    scanf("%i", &num);
    while (cont<num){
        printf("\nDigite o numero:\n");
        scanf("%i",&numero);
        if (numero>5){
            soma=soma+numero;
        }
        cont++;
    }
    printf("A soma dos numeros maiores que 5 eh: %i", soma);
    return 0;    
}
