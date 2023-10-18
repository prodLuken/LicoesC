#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    printf("%i notebook(s) da Sony\n", a);
    printf("%i notebook(s) da Dell\n", b);
    printf("%i notebook(s) da Toshiba\n", c);
    printf("Total de %i notebooks", a + b + c);
}
