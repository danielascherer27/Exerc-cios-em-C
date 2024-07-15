#include<stdio.h>
//Exercicio 05
int main(){
    int num;
    printf("\nDigite qualquer numero");
    scanf("%i", &num);
    if (num % 5 == 0) {
        printf("%d eh multiplo de 5.\n", num);
    } else {
        printf("%d nao e multiplo de 5.\n", num);
    }
    return 0;
}