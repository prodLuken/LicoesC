#include <stdio.h>
#include <stdlib.h>

float RetornaN(int n);

int main()
{
    int n;
    float k;
    scanf("%i", &n);
    for (int i = 1; i <= n; i++) {
        k += (float)1 / RetornaN(i);
    }
    printf("%.2f\n", k);
}

float RetornaN(int n) {
    int k = 1;
    for (int i = 1; i <= n; i++) {
        k *= i;
    }
    return k;
}
