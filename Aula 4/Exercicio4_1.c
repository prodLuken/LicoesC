#include <stdio.h>
#include <string.h>

struct TUsuario {
    int Idade;
    char Nome[50];
}Usuario;

int main() {
    struct TUsuario u;

    scanf("%s", u.Nome);
    scanf("%i", &u.Idade);

    printf("Nome: %s\n", u.Nome);
    printf("Idade: %i", u.Idade);
}
