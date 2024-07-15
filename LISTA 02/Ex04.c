#include<stdio.h>
int main(){
    float valorTotal, desconto, parcela, comissaoParc, comissaoVist;
    printf("\nDigite o valor total da compra:");
    scanf("%f", &valorTotal);
    desconto = valorTotal-(valorTotal * 0.10);
    parcela = valorTotal / 3;
    comissaoVist = desconto * 0.05;
    comissaoParc = valorTotal * 0.05;
    printf("\nO valor total a pagar com desconto de 10%%: R$%.2f\n", desconto);
    printf("\nO valor de cada parcela (3x sem juros): R$%.2f\n", parcela);
    printf("\nA comissao do vendedor (venda a vista): R$%.2f\n", comissaoVist);
    printf("\nA comissao do vendedor (venda parcelada): R$%.2f\n", comissaoParc);

    return 0;
}