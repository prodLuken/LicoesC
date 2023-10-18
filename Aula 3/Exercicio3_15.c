#include <stdio.h>

int main() {
    int x;
    scanf("%i", &x);
    int numeros[x][x];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i == j) {
                numeros[i][j] = 1;
            }
            else {
                numeros[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }
}
