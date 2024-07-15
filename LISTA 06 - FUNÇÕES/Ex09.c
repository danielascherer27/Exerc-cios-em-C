#include <stdio.h>
void processarClientes();
int main() {
    processarClientes();
    return 0;
}
void processarClientes() {
    char nome[15];
    float valor, desconto;
    for (int cont = 0; cont < 150; cont++) {
        printf("\nDigite o nome do cliente:\n");
        scanf("%s", nome);
        printf("\nDigite o valor gasto pelo cliente %s no ano passado:\n", nome);
        scanf("%f", &valor);
        if (valor > 0 && valor < 500000) {
            desconto = valor * 0.10;
            printf("\nAnunciamos que voce recebeu um bonus de 10%% do valor gasto em suas compras no ano passado!\n");
            printf("%s, voce recebeu R$ %.2f de bonus!\n", nome, desconto);
        } else {
            desconto = valor * 0.15;
            printf("\nAnunciamos que voce recebeu um bonus de 15%% do valor gasto em suas compras no ano passado!\n");
            printf("%s, voce recebeu R$ %.2f de bonus!\n", nome, desconto);
        }
    }
}
