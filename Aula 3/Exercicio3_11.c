#include <stdio.h>
#include <string.h>

int tamanhoString(char str[], int tamanhoMaximo) {
    int tm = 0;
    scanf("%8s", str);

    while (str[tm] != '\0' && tm < tamanhoMaximo) {
        tm++;
    }

    while (getchar() != '\n');

    return tm;
}

int main() {
    char str[9];
    int length;
    length = tamanhoString(str, sizeof(str));

    while (length != 8) {
        printf("Voce digitou uma string com %d caractere(s)!\n", length);
        printf("A string deve ter 8 caracteres. Por favor, digite uma nova string:\n");
        length = tamanhoString(str, sizeof(str));
    }

    printf("%.4s", str);
}
