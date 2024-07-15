#include <stdio.h>
#include <stdbool.h>
bool validData(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31 || ano < 1) {
        return false;
    }
    int diasmes = calDiaMes(mes, ano);
    if (dia > diasmes) {
        return false;
    }
    return true;
}
int calDiaMes(int mes, int ano) {
    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            return 29; 
        } else {
            return 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}
int calTotalDia(int dia, int mes, int ano) {
    int totaldias = 0;
    for (int i = 1; i < mes; i++) {
        totaldias += calDiaMes(i, ano);
    }
    totaldias += dia;
    return totaldias;
}
int main() {
    int dia, mes, ano;
    printf("Digite o dia o mes e o ano: Exemplo (dia/mes/ano)\n");
    scanf("%i %i %i", &dia, &mes, &ano);
    if (validData(dia, mes, ano)) {
        printf("Data invalida!\n");
        return 1;
    }
    int totaldias = calTotalDia(dia, mes, ano);
    printf("Dia %d/%d/%d, o dia %d e do ano.\n", dia, mes, ano, totaldias);
    return 0;
}