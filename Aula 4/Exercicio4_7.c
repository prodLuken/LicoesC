#include <stdio.h>

enum Meses {
    Janeiro = 1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
};

int main() {
    enum Meses mes;
    int valor;

    scanf("%d", &valor);

    switch (valor) {
    case Janeiro:
        printf("Janeiro - 31 dias\n");
        break;
    case Fevereiro:
        printf("Fevereiro - 28 dias\n");
        break;
    case Marco:
        printf("Março - 31 dias\n");
        break;
    case Abril:
        printf("Abril - 30 dias\n");
        break;
    case Maio:
        printf("Maio - 31 dias\n");
        break;
    case Junho:
        printf("Junho - 30 dias\n");
        break;
    case Julho:
        printf("Julho - 31 dias\n");
        break;
    case Agosto:
        printf("Agosto - 31 dias\n");
        break;
    case Setembro:
        printf("Setembro - 30 dias\n");
        break;
    case Outubro:
        printf("Outubro - 31 dias\n");
        break;
    case Novembro:
        printf("Novembro - 30 dias\n");
        break;
    case Dezembro:
        printf("Dezembro - 31 dias\n");
        break;
    }
}
