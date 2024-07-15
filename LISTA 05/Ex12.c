#include <stdio.h>
int main(){
    int numero=0, div;
    while (numero<=2500){
       div=numero%2;
       if(div==1){
        printf("Numero: %d\n", numero);
       }
       numero++;
    }
    return 0;    
}