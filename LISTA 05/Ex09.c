#include <stdio.h>
int main(){
    int cont=5, somNumero=0;
    float media, soma;
    while (cont<=150){
        soma+=cont;
        somNumero++;
        cont++;   
    }
    media=soma/somNumero;
    printf("A media dos numeros eh: %.2f\n", media);
    return 0;    
}