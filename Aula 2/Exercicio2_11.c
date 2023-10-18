#include <stdio.h>
#include <stdlib.h>
float operacao(float n1, float n2, char simb) {

    switch (simb)
    {
    case '-':
        return n1 - n2;

    case '+':
        return n1 + n2;

    case '/':
        return n1 / n2;

    case '*':
        return n1 * n2;
    }

}