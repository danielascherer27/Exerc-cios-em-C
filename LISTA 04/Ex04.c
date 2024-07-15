#include <stdio.h>
int main(){
    int n;
    printf("Digite o numero correspondente a um dia da semana: (de 1 a 7)\n");
    scanf("%i",&n);
    switch (n) //aqui a variavel num for de 1 a 7 vai aparecer o dia da semana
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;  
    case 3:
        printf("Terca");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7: 
        printf("Sabado");
        break;       

    default: 
        printf("Numero errado, digite novamento");//mensagem de erro 
        break;
    }
    return 0;
}
