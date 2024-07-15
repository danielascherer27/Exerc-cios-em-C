#include <stdio.h>
// Pedi para o usuário digitar a largura e o comprimento da figura.e a largura é igual o comprimento logo é um quadrado, pois, o quadrado tem os dois lados iguais. Se não é um retangulo.
int main(){
    float larg, compri;
    printf("Digite a largura e o comprimento da figura: \n");
    scanf("%f %f", &larg, &compri); // Pedi para o usuário digitar a largura e o comprimento da figura.
    if(larg == compri){
        printf("A figura geometrica eh um quadrado");
    }
    else{
        printf("A figura geometrica eh um retangulo");
    }
return 0;
}