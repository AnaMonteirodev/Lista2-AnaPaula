#include <stdio.h>

int main() {
    int celsius;

    printf("Conversao de graus Celsius para Fahrenheit:\n");
    printf("Celsius\tFahrenheit\n");

    for (celsius = 10; celsius <= 100; celsius += 10) {
        float fahrenheit = (9.0 / 5.0) * celsius + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
