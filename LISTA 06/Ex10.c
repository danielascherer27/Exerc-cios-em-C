#include <stdio.h>
int main(){
    int matricula;
    float nota;
    for (int cont = 0; cont < 40; cont++){
        printf("\nInsira o numero de matricula do aluno:\n");
        scanf("%i",&matricula);
        printf("\nInsira a nota final do aluno: (modelo: 5.0 / 10.0)\n");
        scanf("%f",&nota);
        if (nota>=0 && nota<5.0){
            printf("\nO aluno %i obteve uma nota final de %.1f pontos.\n",matricula,nota);
            printf("Sua classificacao e: D\n");
        }else if (nota>=5.0 && nota<7.0){
            printf("\nO aluno %i obteve uma nota final de %.1f pontos.\n",matricula,nota);
            printf("Sua classificacao e: C\n");
        }else if (nota>=7.0 && nota<8.0){
            printf("\nO aluno %i obteve uma nota final de %.1f pontos.\n",matricula,nota);
            printf("Sua classificacao e: B\n");
        }else if (nota>=9.0 && nota<=10.0){
            printf("\nO aluno %i obteve uma nota final de %.1f pontos.\n",matricula,nota);
            printf("Sua classificacao e: A\n");
        }else{
            printf("\nDigite uma nota no formato valido!\n");
            cont--;
        }
    } 
    return 0;
}
