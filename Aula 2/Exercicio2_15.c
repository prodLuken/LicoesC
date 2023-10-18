#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2) {
    if (n2 == 0) {
        return 0;
    }
    else {
        return n1 + soma(n1, n2 - 1);
    }
}