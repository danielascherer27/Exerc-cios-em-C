#include <stdio.h>
int main(){
    int numero=111, div;
    while (numero<=350){
       div=numero%2;
       if(div==1){
        printf("Numero: %d\n", numero);
       }
       numero++;
    }
    return 0;    
}