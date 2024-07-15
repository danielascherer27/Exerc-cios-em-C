#include <stdio.h>
int main(){
    int n; 
    float soma = 0;
    printf("\nInsira um valor inteiro e positivo para 'N':\n");
    scanf("%i",&n);
    if (n<0){
        printf("Insira um valor positivo!");
        return 1;
    }
    printf("\nS = ");
    for (int cont = 1; cont <= n; cont++) {
        soma += 1.0 / cont; 
        if (cont > 1) {
            printf(" + "); 
        }
        printf("1/%d", cont); 
    }
    printf(" = %.2f\n", soma); 
    return 0;
}
