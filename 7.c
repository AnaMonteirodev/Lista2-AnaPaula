#include <stdio.h>

int main() {
    float num1, num2, resultado;

    while (1) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número (não pode ser zero): ");
        scanf("%f", &num2);

        if (num2 == 0) {
            printf("Erro: O divisor não pode ser zero. Tente novamente.\n\n");
            continue;  // Retorna ao início do loop para pedir os números novamente
        }

        resultado = num1 / num2;
        printf("Resultado da divisão: %.2f\n", resultado);
        break;  // Sai do loop while
    }

    return 0;
}
