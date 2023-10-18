#include <stdio.h>
#include <string.h>

#define TAMANHO 8

int main() {
    char sting[8];

    scanf("%s", sting);

    while (getchar() != '\n');

    while (strlen(sting) > 5) {
        printf("Digite novamente a string com ate 5 caracteres:\n");
        scanf("%s", sting);

        // Limpa o buffer de entrada
        while (getchar() != '\n');
    }

    // Impressão da string de trás para frente
    for (int i = strlen(sting) - 1; i >= 0; i--) {
        printf("%c ", sting[i]);
    }
}
