#include<stdio.h>
//Exercicio 06
int main(){
    int num;
    printf("\nDigite qualquer numero:");
    scanf("%i", &num);
    if (num >= 100 && num <= 1000){
         printf("O numero esta dentro da faixa de 100 a 1000;\n");
    }else{
        printf("O numero esta fora da faixa de 100 a 1000;");
    }
    return 0;
}