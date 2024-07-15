#include <stdio.h>
int main() {
    float dinheiroReais, dinheiroDolar, dinheiroMarco, dinheiroLibra;
    const float cotacaoDolar = 1.80, cotacaoMarco = 2.00, cotacaoLibra = 1.57;
    printf("Digite a quantidade de dinheiro em reais: ");
    scanf("%f", &dinheiroReais);
    dinheiroDolar = dinheiroReais / cotacaoDolar;
    dinheiroMarco = dinheiroReais / cotacaoMarco;
    dinheiroLibra = dinheiroReais / cotacaoLibra;
    printf("Quantidade equivalente em dólares: %.2f\n", dinheiroDolar);
    printf("Quantidade equivalente em marco alemão: %.2f\n", dinheiroMarco);
    printf("Quantidade equivalente em libra esterlina: %.2f\n", dinheiroLibra);

    return 0;
}
