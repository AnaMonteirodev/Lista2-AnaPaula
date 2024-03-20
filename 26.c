#include <stdio.h>

int main() {
    int decimal;

    printf("Decimal\tBinario\t\tOctal\tHexadecimal\n");

    // Loop para percorrer os números decimais de 1 a 256
    for (decimal = 1; decimal <= 256; decimal++) {
        // Imprime o número decimal
        printf("%d\t", decimal);

        // Imprime o equivalente binário
        int temp = decimal;
        for (int i = 7; i >= 0; i--) {
            printf("%d", (temp >> i) & 1);
        }
        printf("\t");

        // Imprime o equivalente octal
        printf("%o\t", decimal);

        // Imprime o equivalente hexadecimal
        printf("%X\n", decimal);
    }

    return 0;
}
