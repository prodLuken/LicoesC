#include <stdio.h>
#include <stdlib.h>

long superfatorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        long r = 1;
        int j = n;
        for (int i = n; i > 0; i--) {
            r *= i;
        }
        return r * superfatorial(j - 1);
    }
}