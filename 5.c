#include <stdio.h>
int main() {
    int n, maior, menor;

    // Solicita ao usuário o primeiro valor
    printf("Digite um valor (ou zero para sair): ");
    scanf("%d", &n);

    // Define o primeiro valor como o maior e o menor
    maior = n;
    menor = n;

    // Verifica se o usuário digitou zero para sair do programa
    while (n != 0) {
        // Solicita ao usuário o próximo valor
        printf("Digite um valor (ou zero para sair): ");
        scanf("%d", &n);

        // Verifica se o valor digitado é maior ou menor que os já registrados
        if (n > maior)
            maior = n;
        if (n < menor && n != 0)
            menor = n;
    }

    // Imprime o maior e o menor valor
    printf("O maior valor fornecido foi: %d\n", maior);
    printf("O menor valor fornecido foi: %d\n", menor);

    return 0;
}
