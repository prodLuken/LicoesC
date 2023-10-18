#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("A hipotenusa eh: %f", sqrt(a * a + b * b));
}
