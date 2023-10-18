#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int a;
    scanf("%i", &a);
    if (a == 0) {
        printf("Numero NEUTRO!");
        return;
    }
    a %= 2;

    if (a == 0) {
        printf("Numero PAR!");
    }
    else {
        printf("Numero IMPAR!");
    }
}
