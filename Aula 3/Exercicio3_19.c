#include <stdio.h>

int main() {
    int tabela[4][4];
    int superior = 1, inferior = 1, diagonal = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%i", &tabela[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i > j && tabela[i][j] != 0) {
                superior = 0;
            }
            if (i < j && tabela[i][j] != 0) {
                inferior = 0;
            }
            if (i != j && tabela[i][j] != 0) {
                diagonal = 0;
            }
        }
    }
    if (diagonal && superior && inferior) {
        printf("Matriz Diagonal!!!\n");
    }
    else if (superior) {
        printf("Matriz Triangular Superior!!!\n");
    }
    else if (inferior) {
        printf("Matriz Triangular Inferior!!!\n");
    }
    else {
        printf("Nao se Enquadra!!!\n");
    }
}
