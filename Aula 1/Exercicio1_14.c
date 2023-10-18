#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float imc, h, p;
    scanf("%f", &h);
    scanf("%f", &p);
    imc = p / (h * h);
    printf("Seu IMC eh: %.2f\n", imc);
    if (imc <= 18.5) printf("A Classificacao eh: Abaixo do Normal!");
    else if (imc <= 24.9) printf("A Classificacao eh: Normal!");
    else if (imc <= 29.9) printf("A Classificacao eh: Sobrepeso!");
    else if (imc <= 34.9) printf("A Classificacao eh: Obesidade Grau I!");
    else if (imc <= 39.9) printf("A Classificacao eh: Obesidade Grau II!");
    else printf("A Classificacao eh: Obesidade Grau III!");
}
