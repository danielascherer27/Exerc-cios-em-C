#include <stdio.h>
int main(){
    char nome[50];
    int cont=0,nota1,nota2,nota3;
    float media;
    while (cont<5){
        printf("Digite seu nome:\n");
        scanf("%s",&nome);
        printf("Digite suas 3 notas:\n");
        scanf("%i %i %i",&nota1,&nota2,&nota3);
        media=(nota1+nota2+nota3)/3;
        printf("Nome: %s\n",nome);
        printf("A media das notas eh: %2.f\n",media);  
        cont++;
    }
    return 0;    
}
