#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    if (a == b) {
        printf("Numeros iguais!");
        return;
    }
    else if (b > a) {
        a = b;
    }
    printf("O %i eh o maior numero!", a);
}
