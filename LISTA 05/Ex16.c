#include <stdio.h>
int main(){
    int sent=1,nota1,nota2,nota3,menu;
    float media;
    char nome[50];
    while (sent==1){
        printf("Digite 1 para calcular a media das 3 notas.\n");
        printf("Digite 0 para fehcar.\n");
        scanf("%i",&menu);    
        if (menu==1){
            printf("Digite seu nome:\n");
            scanf("%s",&nome);
            printf("Digite suas 3 notas:\n");
            scanf("%i %i %i",&nota1,&nota2,&nota3);
            media=(nota1+nota2+nota3)/3;
            printf("A media das suas 3 notas do aluno(a) %s eh: %.2f\n",nome,media); 
        }else if (menu==0){
            printf("\nVoce fechou :(");
            sent=0;
        }       
    }
    return 0;    
}