#include <stdio.h>

int main() {

    char estado1, estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigoCarta1[10], codigoCarta2[10]; // Código da carta (ex: "SP-001")
    char nomeCidade1[50], nomeCidade2[10]; // Nome da cidade (ex: "São Paulo")
    int populacao1, populacao2; // População da cidade (ex: 12.325.000)
    float area1, area2; // Área da cidade em km² (ex: 1521.11)
    float pib1, pib2; // PIB da cidade em bilhões de reais (ex: 700.5)
    int numPontosTuristicos1, numPontosTuristicos2; // Número de pontos turísticos (ex: 50)

    printf("Bem-vindo ao jogo de cartas Super Trunfo!\n");
    printf("Por favor, insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Captura o estado (A-H)
    printf("COdigo da carta: ");
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

    printf("\nDados da carta cadastrada:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numPontosTuristicos1);

    printf("Por favor, insira os dados da segunda carta:\n");
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

    printf("\nDados da carta cadastrada:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numPontosTuristicos2);

    // Sugestão: Adicione um loop para permitir o cadastro de várias cartas, se necessário.
    // Você pode usar um array de estruturas para armazenar várias cartas, se desejar.

    return 0;
}
