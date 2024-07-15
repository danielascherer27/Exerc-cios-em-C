#include <stdio.h>
int main(){
    int numero=29, div;
    while (numero>=0){
       div=numero%2;
       if(div==1){
        printf("Numero: %d\n", numero);
       }
       numero--;
    }
    return 0;    
}
