#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAMANHO 8

bool eVogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char string[8];
    char substituto;
    int vogais = 0;

    scanf("%s", string);
    while (getchar() != '\n');

    scanf("%c", &substituto);

    for (int i = 0; i < strlen(string); i++) {
        if (eVogal(string[i])) {
            vogais++;
            string[i] = substituto;
        }
    }

    printf("A string possui %d vogais.\n", vogais);
    printf("%s", string);

    return 0;
}
