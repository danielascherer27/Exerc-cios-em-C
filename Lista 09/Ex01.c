#include <stdio.h>
#include <string.h>
int calTamanho(char str[]) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}
void transMaiuscula(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
    }
}
void transMinuscula(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += ('a' - 'A');
        }
    }
}
int main() {
    char palavra1[20], palavra2[20];
    printf("\nDigite a primeira palavra:\n");
    scanf("%s", palavra1);
    printf("\nDigite a segunda palavra:\n");
    scanf("%s", palavra2);

    int tam1 = calTamanho(palavra1);
    int tam2 = calTamanho(palavra2);

    if (tam1 > tam2) {
        transMaiuscula(palavra1);
        transMinuscula(palavra2);
        printf("\nMaior palavra em maiusculas: %s\n", palavra1);
        printf("Menor palavra em minusculas: %s\n", palavra2);
    } else {
        transMaiuscula(palavra2);
        transMinuscula(palavra1);
        printf("\nMaior palavra em maiusculas: %s\n", palavra2);
        printf("Menor palavra em minusculas: %s\n", palavra1);
    }
    return 0;
}
