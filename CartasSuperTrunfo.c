#include <stdio.h>

int main() {

    // Declaração das variáveis
    char estado1, estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigoCarta1[10], codigoCarta2[10]; // Código da carta (ex: "SP-001")
    char nomeCidade1[50], nomeCidade2[10]; // Nome da cidade (ex: "São Paulo")
    unsigned long int populacao1, populacao2; // População da cidade (ex: 12.325.000)
    float area1, area2; // Área da cidade em km² (ex: 1521.11)
    float pib1, pib2; // PIB da cidade em bilhões de reais (ex: 700.5)
    int numPontosTuristicos1, numPontosTuristicos2; // Número de pontos turísticos (ex: 50)
    float densidade1, densidade2; // Densidade populacional (ex: 8100.5)
    float pibPerCapita1, pibPerCapita2; // PIB per capita (ex: 56.8 mil reais)
    float superPoder1, superPoder2; // Superpoderes (ex: 100.0)

    // Inicialização das variáveis
    estado1 = ' '; estado2 = ' ';
    codigoCarta1[0] = '\0'; codigoCarta2[0] = '\0'; // Inicializa como string vazia
    nomeCidade1[0] = '\0'; nomeCidade2[0] = '\0'; // Inicializa como string vazia
    populacao1 = 0; populacao2 = 0; // Inicializa como zero
    area1 = 0.0; area2 = 0.0; // Inicializa como zero
    pib1 = 0.0; pib2 = 0.0; // Inicializa como zero
    numPontosTuristicos1 = 0; numPontosTuristicos2 = 0; // Inicializa como zero
    densidade1 = 0.0; densidade2 = 0.0; // Inicializa como zero
    pibPerCapita1 = 0.0; pibPerCapita2 = 0.0; // Inicializa como zero
    superPoder1 = 0.0; superPoder2 = 0.0; // Inicializa como zero

    // Captura os dados da primeira carta
    printf("Bem-vindo ao jogo de cartas Super Trunfo!\n");
    printf("Por favor, insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Captura o estado (A-H)
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta1); // Captura o código da carta
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1); // Captura o nome da cidade
    printf("Populacao: ");
    scanf("%lu", &populacao1); // Captura a população
    printf("Area (km²): ");
    scanf("%f", &area1); // Captura a área
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1); // Captura o PIB
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numPontosTuristicos1); // Captura o número de pontos turísticos

    // Cálculo da densidade populacional
    densidade1 = (float)populacao1 / area1; // Densidade = População / Área

    // Cálculo do PIB per capita
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB per capita = PIB total / População

    // Cálculo do superpoder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 + pibPerCapita1 + (1/densidade1); // Superpoder = População + Área + PIB + Número de pontos turísticos + PIB per capita + (Inverso da Densidade)

    // Exibe os dados da primeira carta cadastrada
    printf("\nDados da primeira carta cadastrada:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numPontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f mil reais\n", pibPerCapita1 / 1000); // Exibe o PIB per capita em mil reais
    printf("Superpoder: %.2f\n", superPoder1);

    // Captura os dados da segunda carta
    printf("\nPor favor, insira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // Captura o estado (A-H)
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta2); // Captura o código da carta
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2); // Captura o nome da cidade
    printf("Populacao: ");
    scanf("%lu", &populacao2); // Captura a população
    printf("Area (km²): ");
    scanf("%f", &area2); // Captura a área
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2); // Captura o PIB
    printf("Numero de pontos turisticos: ");
    scanf("%d", &numPontosTuristicos2); // Captura o número de pontos turísticos

    // Cálculo da densidade populacional
    densidade2 = (float)populacao2 / area2; // Densidade = População / Área

    // Cálculo do PIB per capita
    pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB per capita = PIB total / População

    // Cálculo do superpoder
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 + pibPerCapita2 + (1/densidade2); // Superpoder = População + Área + PIB + Número de pontos turísticos + PIB per capita + (Inverso da Densidade)

    // Exibe os dados da segunda carta cadastrada
    printf("\nDados da segunda carta cadastrada:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numPontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f mil reais\n", pibPerCapita2 / 1000); // Exibe o PIB per capita em mil reais
    printf("Superpoder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparando as cartas...\n");
    if (populacao1 > populacao2) {
        printf("A carta 1 (cidade %s) venceu (1)\n", nomeCidade1);
    } else {
        printf("A carta 2 (cidade %s) venceu (0)\n", nomeCidade2);
    }
    
    if (area1 > area2) {
        printf("A carta 1 (cidade %s) venceu (1)\n", nomeCidade1);
    } else {
        printf("A carta 2 (cidade %s) venceu (0)\n", nomeCidade2);
    }

    if (pib1 > pib2) {
        printf("A carta 1 (cidade %s) venceu (1)\n", nomeCidade1);
    } else {
        printf("A carta 2 (cidade %s) venceu (0)\n", nomeCidade2);
    }

    if (numPontosTuristicos1 > numPontosTuristicos2) {
        printf("A carta 1 (cidade %s) venceu (1)\n", nomeCidade1);
    } else {
        printf("A carta 2 (cidade %s) venceu (0)\n", nomeCidade2);
    }

    if (densidade1 < densidade2) {
        printf("A carta 1 (cidade %s) venceu (1)\n", nomeCidade1);
    } else {
        printf("A carta 2 (cidade %s) venceu (0)\n", nomeCidade2);
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("A carta 1 (cidade %s) venceu (1)\n", nomeCidade1);
    } else {
        printf("A carta 2 (cidade %s) venceu (0)\n", nomeCidade2);
    }

    if (superPoder1 > superPoder2) {
        printf("A carta 1 (cidade %s) venceu (1)\n", nomeCidade1);
    } else {
        printf("A carta 2 (cidade %s) venceu (0)\n", nomeCidade2);
    }

    return 0;
}
