#include <stdio.h>
int main() {
    float salNormal = 10.00, salExtra = 15.00,  hTrabalhadas, horsExtras, salBruto, salLiquido;
    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%f", &hTrabalhadas);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horsExtras);
    salBruto = hTrabalhadas * salNormal + horsExtras * salExtra;
    salLiquido = salBruto * 0.90; 
    printf("Salário bruto: R$%.2f\n", salBruto);
    printf("Salário líquido: R$%.2f\n", salLiquido);

    return 0;
}
