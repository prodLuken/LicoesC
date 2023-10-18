#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    double e;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    switch (a) {
    case 1:
        printf("O resultado da soma eh: %i", b + c);
        break;
    case 2:
        printf("O resultado da subtracao eh: %i", b - c);
        break;
    case 3:
        e = (double)b / c;
        printf("O resultado da divisao eh: %f", e);
        break;
    case 4:
        printf("O resultado da multiplicacao eh: %i", b * c);
        break;
    default:
        printf("Numero Invalido!");
        break;
    }
}
