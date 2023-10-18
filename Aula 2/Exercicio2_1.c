#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i", &n);
    for (int i = 0; i <= n; i++) {
        printf("%i ", i);
    }
    printf("\n");
    for (n; n >= 0; n--) {
        printf("%i ", n);
    }
}
