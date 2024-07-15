#include<stdio.h>
//Exercicio 03
int main(){
    int num;
    printf("\nDigite qualquer numero:");
    scanf("%i", &num);
    if(num > 50){
        printf("O numero eh maior que 50;\n");
    }else{
        printf("O numero eh menor que 50;\n");
    }
    return 0;
}