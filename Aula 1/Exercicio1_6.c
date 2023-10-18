#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%i", &a);
    b = a - 1;
    printf("Antecessor de %i eh: %i\n", a, b);
    b += 2;
    printf("Sucessor de %i eh: %i", a, b);
}
