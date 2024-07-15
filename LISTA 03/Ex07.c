#include<stdio.h>
//Exercicio 07
int main(){
    int num;
    printf("\nDgiite qualquer numero:");
    scanf("%i", &num);
    if( num % 2 == 0 ){
        printf("O numero %i eh par;\n", num);
    }else{
        printf("O numero %i eh impar;\n", num);
    }
    return 0;
}