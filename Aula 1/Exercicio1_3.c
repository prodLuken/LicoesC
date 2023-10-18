#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m;
    scanf("%i", &m);
    scanf("%i", &h);

    if (h == m)
    {
        printf("Mesma quantidade!");
    }
    else if (h > m)
    {
        printf("Quantidade de alunos eh maior do que de alunas!");
    }
    else
    {
        printf("Quantidade de alunas eh maior do que de alunos!");
    }
}
