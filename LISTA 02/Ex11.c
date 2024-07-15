#include <stdio.h>
int main() {
    int dia, mes, diasPassados;
    printf("Digite o dia e o mês da data (dd mm): ");
    scanf("%d %d", &dia, &mes);
    diasPassados = (mes - 1) * 30 + dia;
    printf("Dias passados desde o início do ano: %d\n", diasPassados);

    return 0;
}
