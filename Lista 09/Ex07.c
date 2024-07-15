#include <stdio.h>
#include <string.h>
void insString(char *dest, const char *src, int pos) {
    int lenDest = strlen(dest);
    int lenSrc = strlen(src);
    if (pos < 0 || pos > lenDest) {
        printf("A posicao inicial esta alem dos limites da string alvo.\n");
        return;
    }
    memmove(dest + pos + lenSrc + 1, dest + pos, lenDest - pos + 1);
    dest[pos + lenSrc] = ' ';
    memcpy(dest + pos, src, lenSrc);
}
int main() {
    char str1[100] = "By Tanenbaum";
    char str2[] = "Andrew";
    int posicao = 3;
    printf("String original: %s\n", str1);
    printf("String a ser inserida: %s\n", str2);
    insString(str1, str2, posicao);
    printf("String modificada: %s\n", str1);
    return 0;
}
