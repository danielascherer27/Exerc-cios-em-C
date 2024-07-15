#include<stdio.h>
//Exercicio 04
int main(){
    int n;
    printf("\nDigite qualquer numero:");
    scanf("%i", &n);
    if (n > 0){
        printf("O numero eh positivo;\n");
    }else{
        if (n < 0){  
            printf("O numero eh negativo;\n");
        }else{
            printf("O numero eh 0;\n");
        }
    }
    return 0;
}