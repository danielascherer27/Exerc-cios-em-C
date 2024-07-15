#include <stdio.h>
int main() {
    int num;
    printf("Por favor, insira um numero:\n");
    scanf("%i", &num);
    printf("Aqui estao todos os numeros inteiros de 1 até o numero digitado:\n");
    for (int cont = 1; cont <= num; cont++){
        printf("%i\n", cont);
    }
    return 0;
}