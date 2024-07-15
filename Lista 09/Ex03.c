#include <stdio.h>
int main() {
    char entrada[100];
    printf("Digite uma string: ");
    scanf("%s", entrada);
    for (int i = 0; entrada[i] != '\0'; i++) {
        printf("%c\n", entrada[i]);
    }
    return 0;
}
