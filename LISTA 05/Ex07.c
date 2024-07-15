#include <stdio.h>
int main(){
    int multi=1,cont=1;
    while (cont<=6){
        multi*=cont;
        cont++;
        printf("%d\n",multi);
    }
    return 0;    
}
