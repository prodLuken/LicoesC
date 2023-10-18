#include <stdio.h>
#include <math.h>
#include <string.h>

struct TPontos {
    int x;
    int y;
};

int main() {
    struct TPontos p[2];
    int xf, yf;
    double dist;

    for (int i = 0; i < 2; i++) {
        scanf("%i", &p[i].x);
        scanf("%i", &p[i].y);
    }

    xf = pow(p[0].x - p[1].x, 2);
    yf = pow(p[0].y - p[1].y, 2);
    dist = (double)sqrt(xf + yf);

    printf("%.1f", dist);
}
