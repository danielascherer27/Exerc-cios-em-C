#include<stdio.h>
//Atividade 01
int main(){
    int idade;
    printf("\nDigite a sua idade:");
    scanf("%i",&idade);
    if ( idade >= 18){
       printf("Voce pode fazer carteira de habilitacao\n");
    }else{
        printf("Voce nao tem idade para fazer a carteira de habilitacao\n");
    }
    return 0;
}