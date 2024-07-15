#include <stdio.h>
int main(){
    float n1=0, n2, potencia=1, cont=0;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &n1, &n2);
    while (cont<n2){
        potencia*=n1;
        cont++;
    }
    printf("A potencia de %.2f elevado %.2f e: %.2f", n1, n2, potencia);
    return 0;    
}