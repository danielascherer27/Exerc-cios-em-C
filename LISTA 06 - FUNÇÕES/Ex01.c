#include <stdio.h>
void obterNumero(int *num);
void imprimirNumeros(int num);
int main() {
    int num;
    obterNumero(&num);
    imprimirNumeros(num);
    return 0;
}
void obterNumero(int *num) {
    printf("Por favor, insira um numero:\n");
    scanf("%i", num);
}
void imprimirNumeros(int num) {
    printf("Aqui estao todos os numeros inteiros de 1 ate o numero digitado:\n");
    for (int cont = 1; cont <= num; cont++) {
        printf("%i\n", cont);
    }
}
