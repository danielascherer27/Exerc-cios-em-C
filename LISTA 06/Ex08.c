#include <stdio.h>
int main(){
    float chico=1.50, ze=1.10;
    int anosTotal;
        for (int anos=1; ze<=chico; anos++){
            chico=chico+0.02;
            ze=ze+0.03;
            anosTotal=anos;
            printf("%i\n",anos);
        }
    printf("Serao necessarios %i anos para que ze seja maior que chico.\n", anosTotal);
    return 0;
}

