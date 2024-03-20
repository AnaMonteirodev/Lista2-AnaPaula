#include <stdio.h>

int main() {
    int termos;
    double pi = 0;
    int sinal = 1;

    printf("Termos\tValor de Pi\n");

    for (termos = 1; termos <= 100; termos++) {
        // Calcula o termo atual da série
        double termo = 4.0 / (2 * termos - 1);
        // Adiciona ou subtrai o termo da soma de acordo com o sinal
        pi += sinal * termo;
        // Inverte o sinal para o próximo termo
        sinal *= -1;

        // Imprime o valor de pi aproximado após o número atual de termos
        printf("%d\t%.10f\n", termos, pi);
    }

    return 0;
}
