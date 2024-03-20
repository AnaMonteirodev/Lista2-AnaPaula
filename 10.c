#include <stdio.h>

int main() {
    int inicio = 15;
    int fim = 90;

    printf("Quadrados dos numeros inteiros multiplos de 4 entre 15 e 90:\n");

    for (int i = inicio; i <= fim; i++) {
        if (i % 4 == 0) {
            int quadrado = i * i;
            printf("Quadrado de %d: %d\n", i, quadrado);
        }
    }

    return 0;
}
