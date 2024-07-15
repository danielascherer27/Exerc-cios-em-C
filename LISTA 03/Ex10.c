#include<stdio.h>
//Exercicio 10
int main() {
    float n1, n2, n3;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    
    float maior, menor;
    
    if (n1 >= n2 && n1 >= n3)
        maior = n1;
    else if (n2 >= n1 && n2 >= n3)
        maior = n2;
    else
        maior = n3;
    
    if (n1 <= n2 && n1 <= n3)
        menor = n1;
    else if (n2 <= n1 && n2 <= n3)
        menor = n2;
    else
        menor = n3;
    
    printf("O maior numero e: %.2f\n", maior);
    printf("O menor numero e: %.2f\n", menor);

    return 0;
}