#include <stdio.h>

int main() {
    int l = 0, c = 0;

    scanf("%i", &l);
    scanf("%i", &c);

    int tabelaT[c][l];

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%i", &tabelaT[j][i]);
        }
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < l; j++) {
            printf("%i ", tabelaT[i][j]);
        }
        printf("\n");
    }
}
