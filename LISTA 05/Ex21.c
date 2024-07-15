#include <stdio.h>
int main() {
    int num somaPosi = 0;
    printf("Digite os numeros (digite 0 para encerrar):\n");
    while (1){
        scanf("%d", &num;)
        if (num==0){
            break;
        }if (num>0){
            somaPosi+=num
        }
    } 
    printf("A soma dos numeros positivos eh: %d", somaPosi);   
    return 0;
}