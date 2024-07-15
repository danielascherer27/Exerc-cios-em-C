#include <stdio.h>
//Exercicio 14
int main() {
    int codigo;
    float preco_unitario, preco_total;
    int quantidade;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (codigo == 1) {
        preco_unitario = 5.32;
    } else if (codigo == 2) {
        preco_unitario = 6.45;
    } else if (codigo == 3) {
        preco_unitario = 2.37;
    } else if (codigo == 4) {
        preco_unitario = 5.32;
    } else if (codigo == 5) {
        preco_unitario = 6.45;
    } else {
        printf("Codigo de produto invalido.\n");
        return 1;
    }

    preco_total = preco_unitario * quantidade;

    printf("O preco total a ser pago e: %.2f\n", preco_total);

    return 0;
}
