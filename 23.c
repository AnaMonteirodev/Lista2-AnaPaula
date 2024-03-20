#include <stdio.h>

int main() {
    int cateto1, cateto2, hipotenusa;
    int count = 0;

    printf("Triplas de Pitágoras não superiores a 500:\n");

    // Percorre os possíveis valores de catetos
    for (cateto1 = 1; cateto1 <= 500; cateto1++) {
        for (cateto2 = cateto1; cateto2 <= 500; cateto2++) {
            // Calcula a hipotenusa
            hipotenusa = cateto1 * cateto1 + cateto2 * cateto2;

            // Verifica se é uma tripla de Pitágoras
            int raiz = 1;
            while (raiz * raiz < hipotenusa) {
                raiz++;
            }
            if (raiz * raiz == hipotenusa && raiz <= 500) {
                printf("%d, %d, %d\n", cateto1, cateto2, raiz);
                count++;
            }
        }
    }

    printf("Total de triplas encontradas: %d\n", count);

    return 0;
}
