#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct TAlunos {
    int Insc;
    char Nome[40];
    double Notas[3];
    double Media;
}Alunos;

void LeitorAlunos(Alunos* al) {
    scanf("%i", &(*al).Insc);
    scanf("%s", (*al).Nome);
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &(*al).Notas[i]);
        (*al).Media += (*al).Notas[i];
    }
    (*al).Media /= 3.0;
}

void EscritorAlunos(Alunos al) {
    printf("%i\n", al.Insc);
    printf("%s\n", al.Nome);
    for (int i = 0; i < 3; i++) {
        printf("%.1f\n", al.Notas[i]);
    }
}

int main() {
    Alunos al[4]; Alunos maMed = { 0, "", 0, 0, 0, 0 };

    for (int i = 0; i < 4; i++) {
        LeitorAlunos(&al[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (al[i].Media > maMed.Media) maMed = al[i];
    }

    EscritorAlunos(maMed);
}
