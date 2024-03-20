#include <stdio.h>

int main() {
    int numero, original, reverso = 0;

    // Solicita ao usuário que insira um número de cinco dígitos
    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &numero);

    original = numero; // Salva o número original

    // Reverte o número
    while (numero != 0) {
        reverso = reverso * 10 + numero % 10;
        numero /= 10;
    }

    // Verifica se o número original é igual ao número reverso
    if (original == reverso) {
        printf("%d eh um palindromo.\n", original);
    } else {
        printf("%d nao eh um palindromo.\n", original);
    }

    return 0;
}
