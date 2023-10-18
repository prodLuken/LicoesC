#include <stdio.h>

void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordena(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                troca(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        scanf("%i", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }
    printf("\n");

    ordena(numeros, 10);

    for (int i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }
}
