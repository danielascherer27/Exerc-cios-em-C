#include <stdio.h>
#include <stdlib.h>
int calFat(int num) {
    if (num == 0) return 1;
    int fat = 1;
    for (int j = 1; j <= num; j++) {
        fat *= j;
    }
    return fat;
}
void exibFat(int val[15], int fat[15]) {
    for (int j = 0; j < 15; j++) {
        fat[j] = calFat(val[j]);
        printf("======\n");
        printf("Valor = %d\n", val[j]);
        printf("Fatorial = %d\n", fat[j]);
    }
}
int main() {
    int lista[15], result[15];
    for (int j = 0; j < 15; j++) {
        lista[j] = rand() % 15;
    }
    exibFat(lista, result);
    return 0;
}
