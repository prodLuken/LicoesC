#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[8], x = 0, y = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%i", &inteiros[i]);
    }

    do {
        if (x < 0 || x >= 8) printf("Valor de X invalido!\n");
        scanf("%i", &x);
    } while (x < 0 || x >= 8);
    do {
        if (y < 0 || y >= 8) printf("Valor de Y invalido!\n");
        scanf("%i", &y);
    } while (y < 0 || y >= 8);

    printf("Soma eh: %i\n", inteiros[x] + inteiros[y]);
}
