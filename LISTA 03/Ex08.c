#include<stdio.h>
//Exercicio 09
int main(){
    float nota1, nota2, media;
    printf("\nDigite a nota 1:");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;
      if (media >= 7.0) {
        printf(" O aluno foi aprovado! Media: %.2f\n", media);
    } else if (media < 4.0) {
        printf(" O aluno foi reprovado! Media: %.2f\n", media);
    } else {
        printf("O aluno foi para Exame! Media: %.2f\n", media);
    }
    return 0;   
}

