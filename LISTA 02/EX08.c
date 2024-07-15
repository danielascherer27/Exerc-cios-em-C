#include <stdio.h>
int main(){
    char nome[50];
    int idAnos, idDias;
    printf("\nDigite seu nome:");
    scanf("%s", &nome); 
    printf("\nDigite sua idade em anos:");
    scanf("%i", &idAnos);
    idDias=idAnos*365;
    printf("%s, VOCE JA VIVEU: %i DIAS\n", nome, idDias);

    return 0;
}   