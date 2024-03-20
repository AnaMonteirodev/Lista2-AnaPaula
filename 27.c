#include <stdio.h>

int main() {
    unsigned char X, Y;

    // Solicita ao usuário que insira os valores de X e Y
    printf("Digite o valor de X (unsigned char): ");
    scanf("%hhu", &X);
    printf("Digite o valor de Y (unsigned char, não menor que 5): ");
    scanf("%hhu", &Y);

    // Verifica se Y é menor que 5
    if (Y < 5) {
        printf("Erro: O valor de Y deve ser 5 ou maior.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Oculta os bits de X nos bits menos significativos dos 4 elementos anteriores e posteriores a Y
    for (int i = Y - 4; i <= Y + 4; i++) {
        if (i < 0 || i >= sizeof(X) * 8) {
            continue; // Ignora os elementos fora do alcance de X
        }

        if (i == Y) {
            continue; // Ignora o próprio Y
        }

        X |= (1 << i); // Configura o bit correspondente em X
    }

    // Imprime o valor de X após ocultar os bits
    printf("O valor de X após ocultar os bits em torno de Y é: %hhu\n", X);

    return 0;
}
