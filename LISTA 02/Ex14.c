#include <stdio.h>
int main() {
    int quantSandu;
    float queijo, presunto, carne;
    printf("Digite a quantidade de sanduíches a fazer: ");
    scanf("%d", &quantSandu);
    queijo = quantSandu * 2 * 0.05; 
    presunto = quantSandu * 1 * 0.05; 
    carne = quantSandu * 1 * 0.10; 
    printf("Quantidade de queijo necessária: %.2f kg\n", queijo);
    printf("Quantidade de presunto necessária: %.2f kg\n", presunto);
    printf("Quantidade de carne necessária: %.2f kg\n", carne);

    return 0;
}
