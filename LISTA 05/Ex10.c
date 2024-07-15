#include <stdio.h>
int main(){
    int cont=200, somNumero=0;
    float media, soma;
    while (cont<=3500){
        soma+=cont;
        somNumero++;
        cont++;   
    }
    media=soma/somNumero;
    printf("A media dos numeros eh: %.2f\n", media);
    return 0;    
}