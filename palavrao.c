#include <stdio.h>
#include <string.h>

int main() {
    char palavra[21];
    int tamanho;

    while (scanf("%s", palavra) != EOF) {
        tamanho = strlen(palavra);

        if (tamanho >= 10) {
            printf("palavrao\n");
        } else {
            printf("palavrinha\n");
        }
    }

    return 0;
}