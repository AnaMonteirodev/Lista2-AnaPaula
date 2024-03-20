#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica cada dígito do número
    while (numero != 0) {
        int digito = numero % 10; // Obtém o último dígito
        if (digito == 7) {
            contador++; // Incrementa o contador se o dígito for 7
        }
        numero /= 10; // Remove o último dígito
    }

    // Imprime o resultado
    printf("O numero de digitos 7 no inteiro eh: %d\n", contador);

    return 0;
}
