#include <stdio.h>
int obterQuantidade();
int obterNumero(int indice);
int encontrarMenorNumero(int quantidade);
int main() {
    int quantidade = obterQuantidade();
    int menorNumero = encontrarMenorNumero(quantidade);
    printf("O menor numero e: %d\n", menorNumero);
    return 0;
}
int obterQuantidade() {
    int quantidade;
    printf("Quantos numeros voce deseja digitar:\n");
    scanf("%d", &quantidade);
    return quantidade;
}
int obterNumero(int indice) {
    int numero;
    printf("Digite o %d numero:\n", indice);
    scanf("%d", &numero);
    return numero;
}
int encontrarMenorNumero(int quantidade) {
    int menor = obterNumero(1);
    for (int i = 2; i <= quantidade; i++) {
        int numero = obterNumero(i);
        if (numero < menor) {
            menor = numero;
        }
    }
    return menor;
}
