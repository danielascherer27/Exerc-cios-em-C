#include <stdio.h>
void inv(float v[], int t) {
    for(int i = t - 1; i >= 0; i--) {
        printf("%.2f ", v[i]);
    }
    printf("\n");
}
int main() {
    float v[10];
    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    printf("Elementos na ordem inversa:\n");
    inv(v, 10);
    return 0;
}
