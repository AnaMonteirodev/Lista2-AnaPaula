#include <stdio.h>

unsigned long long calcularFatorial(int numero) {
    unsigned long long fatorial = 1;

    if (numero < 0) {
        printf("O número deve ser positivo.\n");
        return -1;
    }

    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int numero;
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);

    unsigned long long resultado = calcularFatorial(numero);
    if (resultado != -1) {
        printf("O fatorial de %d é %llu.\n", numero, resultado);
    }

    return 0;
}
