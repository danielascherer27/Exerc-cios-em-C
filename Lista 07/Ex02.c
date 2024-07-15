#include <stdio.h>
void constroiB(int a[], int b[], int t) {
    for(int i = 0; i < t; i++) {
        b[i] = a[i] * 3;
    }
}
int main() {
    int a[8], b[8];
    printf("Digite 8 numeros inteiros:\n");
    for(int i = 0; i < 8; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    constroiB(a, b, 8);
    printf("Vetor B:\n");
    for(int i = 0; i < 8; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
