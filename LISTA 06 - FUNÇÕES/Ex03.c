#include <stdio.h>
void exibirMenu();
int obterCodigoMedicamento();
int obterQuantidade();
float calcularValorTotal(int codigo, int quantidade);
float aplicarDesconto(float valorTotal);
void exibirValorComDesconto(float valorComDesconto);
int main() {
    int codigo, quantidade;
    float valorTotal, valorComDesconto;
    while (1) {
        exibirMenu();
        codigo = obterCodigoMedicamento();
        
        if (codigo == 0) {
            printf("\nVoce saiu!\n");
            break;
        } else if (codigo >= 1 && codigo <= 4) {
            quantidade = obterQuantidade();
            valorTotal = calcularValorTotal(codigo, quantidade);
            valorComDesconto = aplicarDesconto(valorTotal);
            exibirValorComDesconto(valorComDesconto);
        } else {
            printf("\nDigite um codigo valido!\n");
        }
    }
    return 0;
}
void exibirMenu() {
    printf("\nMEDICAMENTOS\n");
    printf("1) Paracetamol - R$ 10.00\n");
    printf("2) Ibuprofeno - R$ 15.00\n");
    printf("3) Omeprazol - R$ 20.00\n");
    printf("4) Loratadina - R$ 12.00\n");
    printf("0) Sair\n");
}
int obterCodigoMedicamento() {
    int codigo;
    printf("\nDigite o codigo do medicamento:\n");
    scanf("%i", &codigo);
    return codigo;
}
int obterQuantidade() {
    int quantidade;
    printf("\nDigite a quantidade:\n");
    scanf("%i", &quantidade);
    return quantidade;
}
float calcularValorTotal(int codigo, int quantidade) {
    float preco;
    switch (codigo) {
        case 1: preco = 10.00; break;
        case 2: preco = 15.00; break;
        case 3: preco = 20.00; break;
        case 4: preco = 12.00; break;
        default: return 0;
    }
    return preco * quantidade;
}
float aplicarDesconto(float valorTotal) {
    return valorTotal * 0.90; // Aplicar 10% de desconto
}
void exibirValorComDesconto(float valorComDesconto) {
    printf("\nValor total com 10%% de desconto: R$ %.2f\n", valorComDesconto);
}
