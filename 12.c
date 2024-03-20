#include <stdio.h>

int main() {
    int A, B;
    int soma = 0;

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

    // Calcula o somatório dos números pares na faixa de A a B
    for (int i = A; i <= B; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    // Imprime o resultado
    printf("O somatorio dos numeros pares na faixa de %d a %d eh: %d\n", A, B, soma);

    return 0;
}
