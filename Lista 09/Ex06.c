#include <stdio.h>
#include <string.h>
void remvCaract(char *s, int pos, int qtd) {
    int len = strlen(s);
    if (pos < 0 || pos >= len) {
        printf("A posicao inicial esta alem dos limites da string alvo.\n");
        return;
    }
    if (qtd <= 0) {
        printf("O numero de caracteres a serem removidos deve ser superior a zero.\n");
        return;
    }
    int caractRestantes = len - (pos + qtd);
    memmove(s + pos, s + pos + qtd, caractRestantes + 1);
}
int main() {
    char entrada[100];
    int posicao, quantidade;
    printf("\nDigite a string: \n");
    scanf("%s", entrada);
    printf("\nDigite a posicao inicial para remover os caracteres: \n");
    scanf("%d", &posicao);
    printf("\nDigite a quantidade de caracteres a remover: \n");
    scanf("%d", &quantidade);
    remvCaract(entrada, posicao, quantidade);
    printf("\nString modificada: %s\n", entrada);
    return 0;
}
