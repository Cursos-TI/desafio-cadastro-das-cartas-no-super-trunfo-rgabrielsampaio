#include <stdio.h>

int main() {

    // Declaração das variáveis
    char estado1, estado2;
    char codigoCarta1[10], codigoCarta2[10];
    char nomeCidade1[50], nomeCidade2[10];
    unsigned long int populacao1, populacao2;
    //float area1, area2;
    //float pib1, pib2;
    //int numPontosTuristicos1, numPontosTuristicos2;
    //float densidade1, densidade2;
    //float pibPerCapita1, pibPerCapita2;
    //float superPoder1, superPoder2;

    // Inicialização das variáveis
    estado1 = ' '; estado2 = ' ';
    codigoCarta1[0] = '\0'; codigoCarta2[0] = '\0';
    nomeCidade1[0] = '\0'; nomeCidade2[0] = '\0';
    populacao1 = 0; populacao2 = 0;
    //area1 = 0.0; area2 = 0.0;
    //pib1 = 0.0; pib2 = 0.0;
    //numPontosTuristicos1 = 0; numPontosTuristicos2 = 0;
    //densidade1 = 0.0; densidade2 = 0.0;
    //pibPerCapita1 = 0.0; pibPerCapita2 = 0.0;
    //superPoder1 = 0.0; superPoder2 = 0.0;

    // Captura os dados da primeira carta
    printf("Bem-vindo ao jogo de cartas Super Trunfo!\n");
    printf("Por favor, insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    //printf("Area (km²): ");
    //scanf("%f", &area1);
    //printf("PIB (bilhoes de reais): ");
    //scanf("%f", &pib1);
    //printf("Numero de pontos turisticos: ");
    //scanf("%d", &numPontosTuristicos1);

    // Cálculo da densidade populacional
    //densidade1 = (float)populacao1 / area1;

    // Cálculo do PIB per capita
    //pibPerCapita1 = pib1 * 1000000000 / populacao1;

    // Cálculo do superpoder
    //superPoder1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 + pibPerCapita1 + (1/densidade1);

    // Exibe os dados da primeira carta cadastrada
    //printf("\nDados da primeira carta cadastrada:\n");
    //printf("Estado: %c\n", estado1);
    //printf("Codigo da carta: %s\n", codigoCarta1);
    //printf("Nome da cidade: %s\n", nomeCidade1);
    //printf("Populacao: %d\n", populacao1);
    //printf("Area: %.2f km²\n", area1);
    //printf("PIB: %.2f bilhoes de reais\n", pib1);
    //printf("Numero de pontos turisticos: %d\n", numPontosTuristicos1);
    //printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    //printf("PIB per capita: %.2f mil reais\n", pibPerCapita1 / 1000);
    //printf("Superpoder: %.2f\n", superPoder1);

    // Captura os dados da segunda carta
    printf("\nPor favor, insira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    //printf("Area (km²): ");
    //scanf("%f", &area2);
    //printf("PIB (bilhoes de reais): ");
    //scanf("%f", &pib2);
    //printf("Numero de pontos turisticos: ");
    //scanf("%d", &numPontosTuristicos2);

    // Cálculo da densidade populacional
    //densidade2 = (float)populacao2 / area2;

    // Cálculo do PIB per capita
    //pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Cálculo do superpoder
    //superPoder2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 + pibPerCapita2 + (1/densidade2);

    // Exibe os dados da segunda carta cadastrada
    //printf("\nDados da segunda carta cadastrada:\n");
    //printf("Estado: %c\n", estado2);
    //printf("Codigo da carta: %s\n", codigoCarta2);
    //printf("Nome da cidade: %s\n", nomeCidade2);
    //printf("Populacao: %d\n", populacao2);
    //printf("Area: %.2f km²\n", area2);
    //printf("PIB: %.2f bilhoes de reais\n", pib2);
    //printf("Numero de pontos turisticos: %d\n", numPontosTuristicos2);
    //printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    //printf("PIB per capita: %.2f mil reais\n", pibPerCapita2 / 1000);
    //printf("Superpoder: %.2f\n", superPoder2);


    printf("\nComparação das cartas (Atributo: População)\n");
    printf("\nCarta 1 - %s: %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    // Comparação das cartas
    //printf("\nComparando as cartas...\n");
    //printf("Carta 1 - Cidade: %s: %lu\n", nomeCidade1, populacao1);
    //printf("Carta 2 - Cidade: %s: %lu\n", nomeCidade2, populacao2);

    //if (populacao1 > populacao2) {
        //printf("A carta 1 (cidade %s) venceu (%lu)\n", nomeCidade1, populacao1);
    //} else {
        //printf("A carta 2 (cidade %s) venceu (%lu)\n", nomeCidade2, populacao2);
    //}

    // if (area1 > area2) {
        // printf("A carta 1 (cidade %s) venceu (%.2f)\n", nomeCidade1, area1);
    // } else {
       //  printf("A carta 2 (cidade %s) venceu (%.2f)\n", nomeCidade2, area2);
    //  }
    
    //  if (pib1 > pib2) {
       //  printf("A carta 1 (cidade %s) venceu (%.2f)\n", nomeCidade1, pib1);
    // } else {
        // printf("A carta 2 (cidade %s) venceu (%.2f)\n", nomeCidade2, pib2);
    // }

    // if (numPontosTuristicos1 > numPontosTuristicos2) {
        // printf("A carta 1 (cidade %s) venceu (%d)\n", nomeCidade1, numPontosTuristicos1);
    // } else {
        // printf("A carta 2 (cidade %s) venceu (%d)\n", nomeCidade2, numPontosTuristicos2);
    // }

    // if (densidade1 < densidade2) {
       //  printf("A carta 1 (cidade %s) venceu (%.2f)\n", nomeCidade1, densidade1);
    // } else {
       //  printf("A carta 2 (cidade %s) venceu (%.2f)\n", nomeCidade2, densidade2);
    //  }

    // if (pibPerCapita1 > pibPerCapita2) {
        // printf("A carta 1 (cidade %s) venceu (%.2f)\n", nomeCidade1, pibPerCapita1 / 1000); // Exibe o PIB per capita em mil reais
    // } else {
        // printf("A carta 2 (cidade %s) venceu (%.2f)\n", nomeCidade2, pibPerCapita2 / 1000); // Exibe o PIB per capita em mil reais
    //}

    //if (superPoder1 > superPoder2) {
        //printf("A carta 1 (cidade %s) venceu (%.2f)\n", nomeCidade1, superPoder1);
    //} else {
       //printf("A carta 2 (cidade %s) venceu (%.2f)\n", nomeCidade2, superPoder2);
    //}

    return 0;
}
