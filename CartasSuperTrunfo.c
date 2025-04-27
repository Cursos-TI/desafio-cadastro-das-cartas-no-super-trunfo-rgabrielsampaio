#include <stdio.h>

int main() {

    // Declaração das variáveis
    char estado1 = 'A', estado2 = 'B';
    char codigoCarta1[10] = "A01", codigoCarta2[10] = "B01";
    char nomeCidade1[50] = "SP", nomeCidade2[10] = "RJ";
    int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int numPontosTuristicos1 = 50, numPontosTuristicos2 = 30;
    float densidade1 = (float)populacao1 / area1, densidade2 = (float)populacao2 / area2;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1, pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibição dos dados das cartas
    printf("Que atributo você quer comparar?\n");
    printf("1 - Nome da cidade\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Densidade demográfica\n");

    // Leitura da opção do usuário
    switch (getchar()) {
        case '1':
            printf("Comparação das cartas (Atributo: Nome da cidade)\n");
            printf("\nCarta 1 - %s\n", nomeCidade1);
            printf("Carta 2 - %s\n\n", nomeCidade2);
            break;

        case '2':
            printf("Comparação das cartas (Atributo: População)\n");
            printf("\nCarta 1: %lu\n", populacao1);
            printf("Carta 2: %lu\n", populacao2);
            
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu!\n");
            } else if (populacao1 < populacao2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            } 
            break;

        case '3':
            printf("Comparação das cartas (Atributo: Área)\n");
            printf("\nCarta 1: %.2f km²\n", area1);
            printf("Carta 2: %.2f km²\n", area2);

            if (area1 > area2) {
                printf("Carta 1 venceu!\n");
            } else if (area1 < area2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case '4':
            printf("Comparação das cartas (Atributo: PIB)\n");
            printf("\nCarta 1: %.2f bilhões de reais\n", pib1);
            printf("Carta 2: %.2f bilhões de reais\n", pib2);

            if (pib1 > pib2) {
                printf("Carta 1 venceu!\n");
            } else if (pib1 < pib2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case '5':
            printf("Comparação das cartas (Atributo: Pontos turísticos)\n");
            printf("\nCarta 1: %d pontos turísticos\n", numPontosTuristicos1);
            printf("Carta 2: %d pontos turísticos\n", numPontosTuristicos2);

            if (numPontosTuristicos1 > numPontosTuristicos2) {
                printf("Carta 1 venceu!\n");
            } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case '6':
            printf("Comparação das cartas (Atributo: Densidade demográfica)\n");
            printf("\nCarta 1: %.2f habitantes/km²\n", densidade1);
            printf("Carta 2: %.2f habitantes/km²\n", densidade2);

            if (densidade1 < densidade2) {
                printf("Carta 1 venceu!\n");
            } else if (densidade1 > densidade2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
