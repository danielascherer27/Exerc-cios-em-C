#include <stdio.h>
int main() {
    printf("Numeros que a sobra da divisao por 11 e 5:\n");
    for (int cont=1000; cont<=1999; cont++)
    {
        if (cont%11==5){
            printf("%i\n",cont);
        }    
    }   
    return 0;
}