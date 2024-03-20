#include <stdio.h>

int main() {
    int quadrado = 1;
    long long soma = 0; // Usamos long long para lidar com números grandes

    printf("Quadro\tGrãos\tSoma Parcial\n");

    while (quadrado <= 64) {
        long long graos = 1LL << (quadrado - 1); // Calcula a quantidade de grãos no quadrado atual
        soma += graos; // Acumula a quantidade total de grãos

        printf("%d\t%lld\t%lld\n", quadrado, graos, soma);

        quadrado++;
    }

    printf("Soma total de grãos: %lld\n", soma);

    return 0;
}
