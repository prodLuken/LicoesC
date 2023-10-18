#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[5];
    float media = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &inteiros[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", inteiros[i]);
        media += inteiros[i];
    }
    media /= 5;
    printf("\n%.2f", media);

}
