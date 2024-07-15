#include <stdio.h>
int calAnoPZeMaChico();
int main() {
    int anosTotal = calAnoPZeMaChico();
    printf("Serao necessarios %i anos para que Ze seja maior que Chico.\n", anosTotal);
    return 0;
}
int calAnoPZeMaChico() {
    float chico = 1.50, ze = 1.10;
    int anos = 0;
    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }
    return anos;
}
