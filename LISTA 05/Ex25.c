#include <stdio.h>
int main(){
    float n1=0, n2, result=0, cont=0;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &n1, &n2);
    while (cont<n2){
        result=result+n1;
        cont++;
    }
    printf("A soma sucessiva de %.2f e %.2f e: %.2f", n1, n2, result);
    return 0;    
}



