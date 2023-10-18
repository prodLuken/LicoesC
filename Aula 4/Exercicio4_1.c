#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%i", &inteiros[i]);
    }
    printf("Vet=\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%i ", inteiros[i]);
    }
    printf("\nOrdem Inversa=\n");
    for (int i = 5; i > -1; i--)
    {
        printf("%i ", inteiros[i]);
    }
}
