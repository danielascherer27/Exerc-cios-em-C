#include <stdio.h>
int main() {
    char nome[50];
    float salarioBruto, salarioLiquido;
    int numDependentes;
    float descontoINSS;
    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);
    printf("Digite o salario bruto do funcionario: ");
    scanf("%f", &salarioBruto);
    printf("Digite o numero de dependentes do funcionario: ");
    scanf("%d", &numDependentes);
    descontoINSS = (salarioBruto <= 300) ? salarioBruto * 0.08 : (salarioBruto <= 700) ? salarioBruto * 0.09 : salarioBruto * 0.10;
    salarioLiquido = salarioBruto - descontoINSS + (15.0 * numDependentes) + 40.0 + 100.0;
    printf("\nNome do funcionario: %s\n", nome);
    printf("Salario liquido do funcionario: R$%.2f\n", salarioLiquido);

    return 0;
}
