#include <stdio.h>
#include <stdlib.h>

int contafreq(int num, int digito) {
    if (num == 0)
    {
        return 0;
    }
    int ultimoDigito = num % 10;
    int frequencia = (ultimoDigito == digito) ? 1 : 0;
    return frequencia + contafreq(num / 10, digito);
}