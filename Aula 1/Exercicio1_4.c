#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ha, hb, ba, bb;
    scanf("%f", &ba);
    scanf("%f", &ha);
    scanf("%f", &bb);
    scanf("%f", &hb);

    if (ba == ha || hb == bb)
    {
        printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
    }
    else
    {
        float areaA = ha * ba, areaB = hb * bb;
        printf("A area do retangulo A eh: %f\n", areaA);
        printf("A area do retangulo B eh: %f\n", areaB);
        if (areaA > areaB) {
            printf("A area do retangulo A eh maior do que a do retangulo B!");
        }
        else if (areaB > areaA) {
            printf("A area do retangulo B eh maior do que a do retangulo A!");
        }
        else {
            printf("A area do retangulo A eh igual ao do retangulo B!");
        }
    }
}