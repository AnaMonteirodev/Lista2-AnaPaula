#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    printf("Fatorial dos valores ímpares na faixa de 1 a 10:\n");

    // Loop para iterar através dos números ímpares de 1 a 10
    for (int i = 1; i <= 10; i += 2) {
        printf("Fatorial de %d: %d\n", i, fatorial(i));
    }

    return 0;
}
