#include <stdio.h>

int main() {
    int voto, total_votos = 0, voto_paulo = 0, voto_renata = 0, voto_branco = 0, voto_nulo = 0;

    printf("Votação para presidente:\n");
    printf("Candidatos:\n");
    printf("5 - Paulo\n");
    printf("7 - Renata\n");
    printf("0 - Voto em branco\n");

    // Loop para receber os votos
    while (1) {
        printf("Digite o número do candidato (ou 0 para voto em branco, ou número negativo para encerrar): ");
        scanf("%d", &voto);

        // Verifica se o voto é válido
        if (voto < 0)
            break; // Sai do loop se o voto for negativo
        else if (voto == 5 || voto == 7 || voto == 0) {
            total_votos++;
            printf("Confirma o seu voto? (1 - Sim, 0 - Não): ");
            int confirmacao;
            scanf("%d", &confirmacao);

            if (confirmacao == 1) {
                if (voto == 5)
                    voto_paulo++;
                else if (voto == 7)
                    voto_renata++;
                else
                    voto_branco++;
            } else {
                printf("Voto cancelado.\n");
            }
        } else {
            printf("Voto nulo.\n");
            voto_nulo++;
        }
    }

    // Calcula as porcentagens de votação
    float percent_paulo = (float)voto_paulo / total_votos * 100;
    float percent_renata = (float)voto_renata / total_votos * 100;
    float percent_branco = (float)voto_branco / total_votos * 100;
    float percent_nulo = (float)voto_nulo / total_votos * 100;

    // Imprime o relatório
    printf("\nRelatório da Eleição:\n");
    printf("Total de votos: %d\n", total_votos);
    printf("Votos em Paulo (Candidato 5): %d (%.2f%%)\n", voto_paulo, percent_paulo);
    printf("Votos em Renata (Candidato 7): %d (%.2f%%)\n", voto_renata, percent_renata);
    printf("Votos em branco: %d (%.2f%%)\n", voto_branco, percent_branco);
    printf("Votos nulos: %d (%.2f%%)\n", voto_nulo, percent_nulo);

    // Determina o candidato eleito
    if (voto_paulo > voto_renata)
        printf("\nPaulo foi eleito presidente!\n");
    else if (voto_renata > voto_paulo)
        printf("\nRenata foi eleita presidente!\n");
    else
        printf("\nHouve um empate na votação.\n");

    return 0;
}
