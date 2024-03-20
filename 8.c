#include <stdio.h>

int main() {
    float valor_mercadoria;
    float entrada, prestacao;

    // Solicita o valor da mercadoria ao usuário
    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);

    // Calcula o valor da entrada
    entrada = valor_mercadoria / 3;
    
    // Arredonda para o inteiro mais próximo
    entrada = (int)(entrada + 0.5);

    // Calcula o valor das prestações
    prestacao = entrada;

    // Verifica se a entrada é maior ou igual às prestações
    if (entrada * 3 < valor_mercadoria) {
        entrada++;
        prestacao--;
    }

    // Exibe os valores da entrada e das prestações
    printf("Valor da entrada: R$ %.2f\n", entrada);
    printf("Valor das prestações: R$ %.2f\n", prestacao);

    return 0;
}
