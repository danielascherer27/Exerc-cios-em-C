#include <stdio.h>
#include <string.h>
int calTamanho(char str[]) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}
int main() {
    char palavra1[20], palavra2[20], resultado[40];
    printf("\nDigite a primeira palavra:\n");
    scanf("%s", palavra1);
    printf("\nDigite a segunda palavra:\n");
    scanf("%s", palavra2);
    int tam1 = calTamanho(palavra1);
    int tam2 = calTamanho(palavra2);
    if (tam1 != tam2) {
        strcpy(resultado, palavra2);
        strcat(resultado, palavra1);
        printf("\nConcatenacao da segunda com a primeira:%s\n", resultado);
    } else {
        printf("\nOs comprimentos das strings são iguais.\n");
        printf("Primeira palavra: %s\n", palavra1);
        printf("Segunda palavra: %s\n", palavra2);
    }
    return 0;
}
