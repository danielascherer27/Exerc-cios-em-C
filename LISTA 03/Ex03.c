#include<stdio.h>
//Exercicio 04
int main(){
    int num;
    printf("\nDigite qualquer numero:");
    scanf("%i", &num);
    if (num >= 1 && num <= 50){
        printf("O numero esta na faixa de 1 a 50;\n");
    }else{
        printf("O numero nao esta na faixa de 1 a 50;\n");
    }
    return 0;
}