#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char nome[50];
    char endereco[100];
    char telefone[20];
} Pessoa;
void cadastrar(Pessoa agenda[], int n){
    for (int i = 0; i < n; i++) {
        printf("Cadastro %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", agenda[i].nome);
        printf("Endereco: ");
        scanf(" %[^\n]", agenda[i].endereco);
        printf("Telefone: ");
        scanf(" %[^\n]", agenda[i].telefone);
    }
}
void pesquisar(Pessoa agenda[], int n) {
    char nome[50];
    printf("Digite o nome a ser pesquisado: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < n; i++){
        if (strcmp(agenda[i].nome, nome) == 0){
            printf("Registro encontrado:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Endereço: %s\n", agenda[i].endereco);
            printf("Telefone: %s\n", agenda[i].telefone);
            return;
        }
    }
    printf("Registro nao encontrado.\n");
}
void listar(Pessoa agenda[], int n){
    for (int i = 0; i < n; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Endereço: %s\n", agenda[i].endereco);
        printf("Telefone: %s\n", agenda[i].telefone);
    }
}
int main(){
    Pessoa agenda[MAX];
    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Cadastrar\n");
        printf("2. Pesquisar\n");
        printf("3. Listar todos\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(agenda, MAX);
                break;
            case 2:
                pesquisar(agenda, MAX);
                break;
            case 3:
                listar(agenda, MAX);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 4);
    return 0;
}
