#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inteiros[5], soma = 0;
    int negativos = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &inteiros[i]);
        if (inteiros[i] < 0) {
            negativos++;
        }
        else {
            soma += inteiros[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", inteiros[i]);
    }
    printf("\n");
    printf("%i\n", negativos);
    printf("%.2f\n", soma);

}
