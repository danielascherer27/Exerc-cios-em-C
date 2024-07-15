#include <stdio.h>
#include <stdlib.h>
void geraMul(int num, int vetResult[10]) {
    for (int i = 0; i < 10; i++) {
        vetResult[i] = num * (i + 1);
    }
}
void exibResult(int num, int vetResult[10]){
    printf("\nResultados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", num, i + 1, vetResult[i]);
    }
}
int main() {
    int num;
    int vetorResultado[10];
    printf("Digite um numero: ");
    scanf("%d", &num);
    geraMul(num, vetorResultado);
    exibResult(num, vetorResultado);
    return 0;
}
