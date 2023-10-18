#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int ano, resto2, resto100, resto400;
    scanf("%i", &ano);
    resto2 = ano % 2;
    resto100 = ano % 100;
    resto400 = ano % 400;

    if (resto2 == 0 && resto100 == 0 && resto400 == 0)printf("Eh Ano Bissexto!");
    else if (resto2 == 0 && resto100 != 0)printf("Eh Ano Bissexto!");
    else printf("Nao Eh Ano Bissexto!");
}
