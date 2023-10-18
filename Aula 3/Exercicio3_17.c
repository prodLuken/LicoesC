#include <stdio.h>
#include <math.h>

int main() {
    int l, c;

    scanf("%i", &l);

    scanf("%i", &c);

    int numeros[l][c];

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (i < j) {
                numeros[i][j] = 2 * i + 7 * j - 2;
            }
            else if (i == j) {
                numeros[i][j] = 3 * pow(i, 2) - 1;
            }
            else {
                numeros[i][j] = 4 * pow(i, 3) + 5 * pow(j, 2) + 1;
            }
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%i ", numeros[i][j]);
        }
        printf("\n");
    }

}
