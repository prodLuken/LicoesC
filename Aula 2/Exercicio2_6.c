#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, h;
    float t = 1;
    scanf("%i", &n);
    for (int i = 2; i <= n; i++) {
        t += (float)1 / i;
    }
    printf("%.1f\n", t);
}
