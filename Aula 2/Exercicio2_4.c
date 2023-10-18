#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, menor = 2147483647; //não achei o valor de int_max direto
    do
    {
        scanf("%i", &n);
        switch (n)
        {
        case 1:
            scanf("%i", &a);
            scanf("%i", &b);
            printf("(a+b) = %i\n", a + b);
            if (a + b < menor) menor = a + b;
            break;

        case 2:
            scanf("%i", &a);
            scanf("%i", &b);
            scanf("%i", &c);
            printf("(a+b+c) = %i\n", a + b + c);
            if (a + b + c < menor) menor = a + b + c;
            break;

        case 3:
            scanf("%i", &a);
            scanf("%i", &b);
            printf("(a*b) = %i\n", a * b);
            if (a * b < menor) menor = a * b;
            break;

        case 0:
            break;
        }
    } while (n != 0);

    if (menor == 2147483647)printf("Nenhum calculo foi realizado!\n");
    else printf("Menor resultado: %i\n", menor);
}
