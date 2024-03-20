#include <stdio.h>

int main() {
    int soma_div_3 = 0;
    int soma_div_5 = 0;

    // Calcula o somatório de números divisíveis por 3 no intervalo [0, 100]
    // e o somatório de números divisíveis por 5 no intervalo ]100, 200]
    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
            soma_div_3 += i;
        } else if (i > 100 && i <= 200 && i % 5 == 0) {
            soma_div_5 += i;
        }
    }

    // Imprime os resultados
    printf("Somatorio de numeros divisiveis por 3 no intervalo [0, 100]: %d\n", soma_div_3);
    printf("Somatorio de numeros divisiveis por 5 no intervalo ]100, 200]: %d\n", soma_div_5);

    return 0;
}
