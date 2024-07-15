#include <stdio.h>
int main(){
    char nome[50];
    int cont=0;
    while (cont<3){
        printf("Digite o nome:\n");
        scanf("%s",nome);
        printf("Nome: %s\n",nome);
        cont++;
    }
    return 0;    
}