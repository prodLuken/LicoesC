#include <stdio.h>

int main() {
    int tabela[3][3];
    int somas[3] = { 0, 0, 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%i", &tabela[i][j]);
        }
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            somas[j] += tabela[i][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        printf("%i ", somas[j]);
    }
}
