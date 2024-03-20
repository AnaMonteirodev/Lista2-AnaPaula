#include <stdio.h>

int main() {
    int x = 5;
    int pre_incremento, pos_incremento;

    // Pré-incremento
    pre_incremento = ++x; // Incrementa x antes de atribuir seu valor a pre_incremento
    printf("Pré-incremento: Valor de x após pré-incremento: %d, Valor de pre_incremento: %d\n", x, pre_incremento);

    x = 5; // Resetar x para 5

    // Pós-incremento
    pos_incremento = x++; // Atribui o valor de x a pos_incremento antes de incrementar x
    printf("Pós-incremento: Valor de x após pós-incremento: %d, Valor de pos_incremento: %d\n", x, pos_incremento);

    return 0;
}
