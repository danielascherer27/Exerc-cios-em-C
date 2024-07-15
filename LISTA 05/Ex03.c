#include <stdio.h>
int main(){
    int numero=0, div;
    while (numero<=30){
       div=numero%2;
       if(div==0){
        printf("Numero: %d\n", numero);
       }
       numero++;
    }
    return 0;    
}

