#include <stdio.h>

int main() {
    int termo_atual = 0;
    int termo_anterior = 1;
    int termo_anterior_anterior = 0;

    printf("Os primeiros vinte termos da sequencia de Fibonacci sao:\n");

    for (int i = 1; i <= 20; i++) {
        printf("%d ", termo_atual);
        termo_atual = termo_anterior + termo_anterior_anterior;
        termo_anterior_anterior = termo_anterior;
        termo_anterior = termo_atual;
    }

    printf("\n");

    return 0;
}
