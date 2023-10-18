#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%i", &inteiros[i]);
    }
    int soma = inteiros[0] + inteiros[1] + inteiros[5];
    inteiros[4] = 100;
    printf("A soma eh: %i.\n", soma);
    for (int i = 0; i < 6; i++)
    {
        printf("%i\n", inteiros[i]);
    }
}
