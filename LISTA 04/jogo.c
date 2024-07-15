#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, aleatorio, chances, palpite;
    while(chances<=20);
    {
        
    num=rand()%3000;
    
    printf("Digite um numero aleatorio entre 1 e 3000:\n");
    scanf("%i", &palpite);
    
    if (palpite!=num&&palpite>num){
        printf("eh um numero menor:\n");
    }else{
        printf("eh um numero maior:\n");
    }if (palpite==num){
        printf("Parabens voce acertou!\n");
        break;
    }
    }
    printf("Voce perdeu!!!\n")

    return 0;
}