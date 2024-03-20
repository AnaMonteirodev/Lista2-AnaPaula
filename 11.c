#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira o número para a tabuada
    printf("Digite um numero inteiro para ver sua tabuada: ");
    scanf("%d", &numero);

    // Imprime a tabuada
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
