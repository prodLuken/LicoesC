#include "Exercicio_08_bib.h"

void criaAluno(Aluno* a, char linha[512]) {
    sscanf(linha, "%d, %[^,], %f, %f, %f", &a->ra, a->nome, &a->p1, &a->p2, &a->p3);
    a->final = (a->p1 + a->p2 + a->p3) / 3.0;
}

void escreverAluno(Aluno a) {
    printf("ra: %d\n", a.ra);
    printf("nome: %s\n", a.nome);
    printf("p1: %.1f\n", a.p1);
    printf("p2: %.1f\n", a.p2);
    printf("p3: %.1f\n", a.p3);
    printf("final: %.1f", a.final);
}