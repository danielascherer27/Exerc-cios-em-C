#include <stdio.h>
#include <string.h>
typedef struct {
    char numero[20];
    float valor;
} Cheque;
typedef struct{
    char nome[50];
    float saldo;
} ContaBancaria;
void chequeSFundo(Cheque cheques[], int num_cheques, ContaBancaria conta){
    printf("Relatorio de Cheques Sem Fundo:\n");
    for (int i = 0; i < num_cheques; i++) {
        if (cheques[i].valor > conta.saldo) {
            printf("Cheque numero: %s - Valor: %.2f\n", cheques[i].numero, cheques[i].valor);
        }
    }
}
int main(){
    ContaBancaria conta;
    printf("Digite o nome do titular da conta: ");
    scanf(" %[^\n]", conta.nome);
    printf("Digite o saldo da conta: ");
    scanf("%f", &conta.saldo);
    int num_cheques;
    printf("Digite o numero de cheques: ");
    scanf("%d", &num_cheques);
    Cheque cheques[num_cheques];
    for (int i = 0; i < num_cheques; i++) {
        printf("Cheque %d\n", i + 1);
        printf("Numero: ");
        scanf(" %[^\n]", cheques[i].numero);
        printf("Valor: ");
        scanf("%f", &cheques[i].valor);
    }
    chequeSFundo(cheques, num_cheques, conta);
    return 0;
}
