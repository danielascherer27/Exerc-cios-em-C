#include <stdio.h>
//Exercicio 12
int main() {
    float a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            printf("Os lados formam um triangulo Equilatero.\n");
        else if (a == b || a == c || b == c)
            printf("Os lados formam um triangulo Isosceles.\n");
        else
            printf("Os lados formam um triangulo Escaleno.\n");
    } else {
        printf("Os lados nao podem formar um triangulo.\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            printf("Os lados formam um triangulo Equilatero.\n");
        else if (a == b || a == c || b == c)
            printf("Os lados formam um triangulo Isosceles.\n");
        else
            printf("Os lados formam um triangulo Escaleno.\n");
    } else {
        printf("Os lados nao podem formar um triangulo.\n");
    }

    return 0;
}



