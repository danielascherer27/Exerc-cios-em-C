#include <stdio.h>
int main(){
    int numero=0,soma=0;
    while (numero<=100){
        soma+=numero;
        numero++;
        printf("Numero: %d\n",soma);
    }
    return 0;    
}
