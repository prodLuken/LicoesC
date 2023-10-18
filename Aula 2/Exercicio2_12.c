#include <stdio.h>
#include <stdlib.h>

int soma(int n) {
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * n * n + soma(n - 1);
    }
}