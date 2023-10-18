#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct TAtletas {
    char Nome[40];
    int Idade;
    double Altura;
}Atletas;

void LeitorAtleta(Atletas* at) {
    scanf("%s", (*at).Nome);
    scanf("%i", &(*at).Idade);
    scanf("%lf", &(*at).Altura);
}


int main() {
    Atletas at[4];

    for (int i = 0; i < 4; i++) {
        LeitorAtleta(&at[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (at[i].Idade < at[j].Idade) {
                Atletas at2 = at[i];
                at[i] = at[j];
                at[j] = at2;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%i ", at[i].Idade);
    }

}
