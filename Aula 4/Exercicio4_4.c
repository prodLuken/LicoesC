#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct TAtletas {
    char Nome[40];
    int Idade;
    double Altura;
}Atletas;

void LeitorAlunos(Atletas* at) {
    scanf("%s", (*at).Nome);
    scanf("%i", &(*at).Idade);
    scanf("%lf", &(*at).Altura);
}

void EscritorAlunos(Atletas at) {
    printf("%s\n", at.Nome);
    printf("%i\n", at.Idade);
    printf("%.2lf\n", at.Altura);
}

int main() {
    Atletas at[4]; Atletas mA = { "", 0, 0 }; Atletas mI = { "", 0, 0 };

    for (int i = 0; i < 4; i++) {
        LeitorAlunos(&at[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (at[i].Idade > mI.Idade) mI = at[i];
        if (at[i].Altura > mA.Altura) mA = at[i];
    }

    printf("Mais alto: %s\n", mA.Nome);
    printf("Mais velho: %s\n", mI.Nome);
}
