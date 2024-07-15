#include <stdio.h>
int main(){
    float valGosolina, valPgto, litro;
    printf("\nDigite o valor da gasolina por litro presente na bomba de abastecimento: ");
    scanf("%f", &valGosolina);
    printf("\nDigite o valor da total pago pelo abastecimento: ");
    scanf("%f", &valPgto);
    litro= valPgto/valGosolina;
    printf("\nA quantidade de litro que você conseguiu abastecer eh: %.2f\n", litro);

    return 0;
}