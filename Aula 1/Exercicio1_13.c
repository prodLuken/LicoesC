#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a <= 0 || b <= 0 || c <= 0) printf("Entrada INVALIDA!");
    else if (a == b && b == c) printf("Triangulo EQUILATERO!");
    else if (a == b && b != c) printf("Triangulo ISOSCELES!");
    else if (a != b && b == c) printf("Triangulo ISOSCELES!");
    else if (a != b && b != c && a != c) printf("Triangulo ESCALENO!");
}
