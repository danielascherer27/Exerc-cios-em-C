#include <stdio.h>
int main(){
    int multi=1,cont=1,numero;
    printf("Digite qualquer numero para ser fatorado:\n");
    scanf("%i",&numero);
    while (cont<=numero){
        multi*=cont;
        cont++;
        printf("%d\n",multi);
    }
    return 0;    
}