#include <stdio.h>
int main(){
    int numero=600,soma=0;
    while (numero<=1000){
        soma+=numero;
        numero++;
        printf("Numero: %d\n",soma);
    }
    return 0;    
}
