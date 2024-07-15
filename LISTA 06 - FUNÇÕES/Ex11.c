#include <stdio.h>
int obterValorN();
void calExibirSerie(int n);
int main() {
    int n = obterValorN();
    if (n < 0) {
        printf("Insira um valor positivo!");
        return 1;
    }
    calExibirSerie(n);
    return 0;
}
int obterValorN(){
    int n;
    printf("\nInsira um valor inteiro e positivo para 'N':\n");
    scanf("%i", &n);
    return n;
}
void calExibirSerie(int n) {
    float soma = 0;
    printf("\nS = ");
    for (int cont = 1; cont <= n; cont++) {
        soma += 1.0 / cont;
        if (cont > 1) {
            printf(" + ");
        }
        printf("1/%d", cont);
    }
    printf(" = %.2f\n", soma);
}
