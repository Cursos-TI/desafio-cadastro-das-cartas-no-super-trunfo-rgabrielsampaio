#include <stdio.h>

int main() {

    char estado1, estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigoCarta1[10], codigoCarta2[10]; // Código da carta (ex: "SP-001")
    char nomeCidade1[50], nomeCidade2[10]; // Nome da cidade (ex: "São Paulo")
    int populacao1, populacao2; // População da cidade (ex: 12.325.000)
    float area1, area2; // Área da cidade em km² (ex: 1521.11)
    float pib1, pib2; // PIB da cidade em bilhões de reais (ex: 700.5)
    int numPontosTuristicos1, numPontosTuristicos2; // Número de pontos turísticos (ex: 50)
    float densidade1, densidade2; // Densidade populacional (ex: 8100.5)
    float pibPerCapita1, pibPerCapita2; // PIB per capita (ex: 56.8 mil reais)

    printf("Bem-vindo ao jogo de cartas Super Trunfo!\n");
    printf("Por favor, insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Captura o estado (A-H)
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta1); // Captura o código da carta
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1); // Captura o nome da cidade
    printf("Populacao: ");
    scanf("%d", &populacao1); // Captura a população
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

    printf("\nPor favor, insira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // Captura o estado (A-H)
    printf("Codigo da carta: ");
    scanf("%s", codigoCarta2); // Captura o código da carta
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2); // Captura o nome da cidade
    printf("Populacao: ");
    scanf("%d", &populacao2); // Captura a população
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

    // Sugestão: Adicione um loop para permitir o cadastro de várias cartas, se necessário.
    // Você pode usar um array de estruturas para armazenar várias cartas, se desejar.

    return 0;
}
