#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct TPonto {
    float x;
    float y;
}Pontos;

typedef struct TRetangulo {
    Pontos p[4];
}Retangulo;

void LeitorAtleta(Pontos* pt) {
    scanf("%f", &(*pt).x);
    scanf("%f", &(*pt).y);
}


int main() {
    Retangulo rt;
    float x, y, d;

    for (int i = 0; i < 4; i++) {
        LeitorAtleta(&rt.p[i]);
    }

    for (int i = 0; i < 3; i++) {
        if (rt.p[i].x == rt.p[i + 1].x) y = rt.p[i].y - rt.p[i + 1].y;
        if (rt.p[i].y == rt.p[i + 1].y) x = rt.p[i].x - rt.p[i + 1].x;
    }

    d = sqrtf(pow(x, 2) + pow(y, 2));
    printf("%.2f", d);
}
