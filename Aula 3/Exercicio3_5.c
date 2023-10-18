#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int inteiros[10], maior = -20000, menor = 20000, npar = 0, par[10], nimp = 0, imp[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &inteiros[i]);
        if (maior < inteiros[i]) maior = inteiros[i];
        if (menor > inteiros[i]) menor = inteiros[i];
        if (inteiros[i] % 2 == 0) {
            if (npar == 0) {
                par[npar] = inteiros[i];
                npar++;
            }
            else
            {
                bool unico = true;
                for (int k = 0; k < npar; k++) {
                    if (par[k] == inteiros[i]) unico = false;
                }
                if (unico) {
                    par[npar] = inteiros[i];
                    npar++;
                }
            }
        }
        else {
            if (nimp == 0) {
                imp[nimp] = inteiros[i];
                nimp++;
            }
            else
            {
                bool unico = true;
                for (int k = 0; k < nimp; k++) {
                    if (imp[k] == inteiros[i]) unico = false;
                }
                if (unico) {
                    imp[nimp] = inteiros[i];
                    nimp++;
                }
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", inteiros[i]);
    }

    printf("\nNumeros pares:\n");
    for (int i = 0; i < npar; i++)
    {
        printf("%i\n", par[i]);
    }
    printf("Numeros impares:\n");
    for (int i = 0; i < nimp; i++)
    {
        printf("%i\n", imp[i]);
    }
    printf("Maior: %i\n", maior);
    printf("Menor: %i", menor);
}
