#include "Biblioteca/Exercicio_08_bib.h"

int main() {
    char nomeArquivo[50];
    scanf("%s", nomeArquivo);
    FILE* arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        return 1;
    }

    int numAlunos = 0;
    float mediaTurma = 0;
    Aluno alunos[50];

    while (!feof(arquivo)) {
        char linha[512];
        fgets(linha, sizeof(linha), arquivo);
        criaAluno(&alunos[numAlunos], linha);
        mediaTurma += alunos[numAlunos].final;
        numAlunos++;
    }

    fclose(arquivo);

    mediaTurma /= numAlunos;
    printf("Numero de Alunos: %d\n", numAlunos);
    printf("Media: %.1f\n", mediaTurma);
    printf("Alunos acima da media:\n");

    for (int i = 0; i < numAlunos; i++) {
        if (alunos[i].final > mediaTurma) {
            printf("\n");
            escreverAluno(alunos[i]);
        }
    }

}