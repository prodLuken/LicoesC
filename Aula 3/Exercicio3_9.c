#include <stdio.h>
#include <stdbool.h>

bool existeNoVetor(int vetor[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] == valor) {
            return true;
        }
    }
    return false;
}

int main() {
    int vetor[10];
    int temp, i = 0;

    while (i < 10) {
        scanf("%i", &temp);

        if (existeNoVetor(vetor, i, temp)) {
            printf("Numero já digitado! Digite outro numero!\n");
        }
        else {
            vetor[i] = temp;
            i++;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}
