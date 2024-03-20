#include <stdio.h>

int main() {
    int base = 3;
    int expoente;
    int resultado = 1;

    printf("Potências de 3 elevado ao expoente de 0 a 7:\n");

    // Loop para calcular as potências
    for (expoente = 0; expoente <= 7; expoente++) {
        // Calcula o resultado da potência
        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }

        // Imprime o resultado da potência
        printf("3^%d = %d\n", expoente, resultado);

        // Reinicia o resultado para a próxima potência
        resultado = 1;
    }

    return 0;
}
