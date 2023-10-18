#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;
    scanf("%i", &n);
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%i ", i);
        }
        i++;
    }
    printf("\n");
    i = 0;
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%i ", i);
        }
        i++;
    }
}
