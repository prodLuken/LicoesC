#include <stdio.h>

int main() {
    int matriz[3][3];
    int menor, maior, menorLinha, menorColuna, maiorLinha, maiorColuna;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];
    maior = matriz[0][0];
    menorLinha = 0;
    menorColuna = 0;
    maiorLinha = 0;
    maiorColuna = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                menorLinha = i;
                menorColuna = j;
            }

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                maiorLinha = i;
                maiorColuna = j;
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Posicao (maior): %d linha e %d coluna\n", maiorLinha, maiorColuna);
    printf("Menor: %d\n", menor);
    printf("Posicao (menor): %d linha e %d coluna", menorLinha, menorColuna);

    return 0;
}
