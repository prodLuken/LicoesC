#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k = 1, j = 1;
    scanf("%i", &n);
    for (int i = 1; i <= n; i++) {
        for (k; k <= i; k++) {
            if (j < 10) {
                printf("%i...", j);
            }
            else {
                printf("%i..", j);
            }
            j++;
        }
        k = 1;
        printf("\n");
    }
}
