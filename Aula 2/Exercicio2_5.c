#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t = 1;
    scanf("%i", &n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0 && i != 1) t += i;
    }
    printf("%i\n", t);
}
