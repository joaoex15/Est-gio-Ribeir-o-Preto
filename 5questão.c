#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
}
