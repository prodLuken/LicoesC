#include <stdio.h>
#include <stdlib.h>
int dec2bin(int n_decimal) {
    if (n_decimal == 0)
    {
        return 0;
    }
    else
    {
        int r = n_decimal % 2;
        return dec2bin(n_decimal / 2) * 10 + r;
    }
}