#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i", &n);
    while (n < 0) {
        printf("O numero deve ser >=0!\n");
        scanf("%i", &n);
    }

    while (n >= 0) {
        printf("%i ", n);
        n--;
    }
    printf("\nFIM!");
}
