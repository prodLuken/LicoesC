#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeros[6], iguais[6], ni = 0;
    bool igual = false;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (numeros[i] == numeros[j]) {
                igual = true;
                bool repete = false;
                for (int k = 0; k < ni; k++) {
                    if (iguais[k] == numeros[i]) repete = true;
                }
                if (!repete) {
                    iguais[ni] = numeros[i];
                    ni++;
                }
            }
        }
    }
    printf("\n");
    for (int i = 0; i < ni; i++) {
        printf("%d\n", iguais[i]);
    }

    if (!igual) {
        printf("Nao existem valores iguais!\n");
    }

    return 0;
}
