#include <stdio.h>
#include <stdlib.h>
void convertF(float tempC[20], float tempF[20]) {
    for (int i = 0; i < 20; i++) {
        tempF[i] = (tempC[i] * 9 / 5) + 32;
    }
}
void exibTemp(float tempC[20], float tempF[20]){
    for (int i = 0; i < 20; i++) {
        printf("%.1f C = %.1f F\n", tempC[i], tempF[i]);
    }
}
int main() {
    float tempC[20], tempF[20];
    for (int i = 0; i < 20; i++) {
        tempC[i] = rand() % 100;
    }
    convertF(tempC, tempF);
    exibTemp(tempC, tempF);
    return 0;
}
