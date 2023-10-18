#include <stdio.h>
#include <stdlib.h>

int potencia(int n1, int n2) {
    if (n2 == 0) {
        return 1;
    }
    else {
        return n1 * potencia(n1, n2 - 1);
    }
}