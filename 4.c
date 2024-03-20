#include <stdio.h>
int main(){
    int jose_altura = 150, pedro_altura = 110;
    int anos = 0;

    while (pedro_altura <= jose_altura) {
        jose_altura += 2; // José cresce 2 centímetros por ano
        pedro_altura += 3; // Pedro cresce 3 centímetros por ano
        anos++; // Contador de anos
    }

    printf("Pedro será maior que José em %d anos.\n", anos);

    return 0;
}
