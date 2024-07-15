#include <stdio.h>
int main() {
    char entrada[100];
    printf("Digite uma string: ");
    scanf("%s", entrada);
    for (int i = 0; entrada[i] != '\0'; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", entrada[i]);
        }
        printf("\n");
    }
    return 0;
}
