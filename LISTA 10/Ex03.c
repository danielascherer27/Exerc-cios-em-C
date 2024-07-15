#include <stdio.h>
#define SEMANAS 4
#define PRODUTOS 5
typedef struct {
    char nome[50];
    int vendas[SEMANAS];
} Produto;
void maiorSaid(Produto produtos[], int n){
    int maior = 0;
    for (int i = 1; i < n; i++) {
        if (produtos[i].vendas[0] > produtos[maior].vendas[0]){
            maior = i;
        }
    }
    printf("Produto de maior saida: %s\n", produtos[maior].nome);
}
void diferePercent(Produto produtos[], int n){
    int maior = produtos[0].vendas[0];
    int menor = produtos[0].vendas[0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            if (produtos[i].vendas[j] > maior){
                maior = produtos[i].vendas[j];
            }
            if (produtos[i].vendas[j] < menor){
                menor = produtos[i].vendas[j];
            }
        }
    }
    float diferenca = ((maior - menor) / (float)menor) * 100;
    printf("Diferenca percentual entre maior e menor saida: %.2f%%\n", diferenca);
}
void semanaMSaid(Produto produtos[], int n){
    for (int i = 0; i < n; i++) {
        int maiorSemana = 0;
        for (int j = 1; j < SEMANAS; j++){
            if (produtos[i].vendas[j] > produtos[i].vendas[maiorSemana]){
                maiorSemana = j;
            }
        }
        printf("Produto: %s - Semana de maior saida: %d\n", produtos[i].nome, maiorSemana + 1);
    }
}
int main() {
    Produto produtos[PRODUTOS];
    for (int i = 0; i < PRODUTOS; i++){
        printf("Produto %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        for (int j = 0; j < SEMANAS; j++) {
            printf("Vendas na semana %d: ", j + 1);
            scanf("%d", &produtos[i].vendas[j]);
        }
    }
    maiorSaid(produtos, PRODUTOS);
    diferePercent(produtos, PRODUTOS);
    semanaMSaid(produtos, PRODUTOS);
    return 0;
}
