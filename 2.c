#include <stdio.h>
void imprimir_dia_da_semana(int numero) {
    switch (numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número de dia não válido\n");
    }
}
int main(){
  int numero;

      do {
          printf("Digite um número de 1 a 7 (ou 0 para sair): ");
          scanf("%d", &numero);

          if (numero >= 1 && numero <= 7) {
              imprimir_dia_da_semana(numero);
          } else if (numero != 0) {
              printf("Número de dia não válido\n");
          }
      } while (numero != 0);

      return 0;
  }
}
