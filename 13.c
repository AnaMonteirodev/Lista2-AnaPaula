#include <stdio.h>

int main() {
    int A, B;
    int quantidade = 0;

    // Solicita ao usuário os valores de A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Garante que A seja menor que B
    if (A > B) {
        // Se A for maior que B, troca os valores
        int temp = A;
        A = B;
        B = temp;
    }

    // Calcula a quantidade de números divisíveis por 3 na faixa de A a B
    for (int i = A; i <= B; i++) {
        if (i % 3 == 0) {
            quantidade++;
        }
    }

    // Imprime o resultado
    printf("A quantidade de numeros divisiveis por 3 na faixa de %d a %d eh: %d\n", A, B, quantidade);

    return 0;
}
