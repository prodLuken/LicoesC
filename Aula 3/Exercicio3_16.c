#include <stdio.h>

int main() {
    int numeros[3][3];
    int principal = 0, secundaria = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%i", &numeros[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        principal += numeros[i][i];
        secundaria += numeros[i][2 - i];
    }

    printf("Soma diagonal principal: %d\n", principal);
    printf("Soma diagonal secundaria: %d\n", secundaria);
}
