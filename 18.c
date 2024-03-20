#include <stdio.h>

int main() {
    int inicio, fim;
    int soma = 0;
    int quantidade = 0;

    // Solicita ao usuário os valores de início e fim da faixa
    printf("Digite o valor de inicio da faixa: ");
    scanf("%d", &inicio);
    printf("Digite o valor de fim da faixa: ");
    scanf("%d", &fim);

    // Verifica se o valor de início é menor que o valor de fim
    if (inicio > fim) {
        printf("Erro: O valor de inicio deve ser menor que o valor de fim.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Calcula a soma dos números inteiros na faixa
    for (int i = inicio; i <= fim; i++) {
        soma += i;
        quantidade++;
    }

    // Calcula a média aritmética
    float media = (float) soma / quantidade;

    // Imprime o resultado
    printf("A media aritmetica dos numeros inteiros na faixa de %d a %d eh: %.2f\n", inicio, fim, media);

    return 0;
}
