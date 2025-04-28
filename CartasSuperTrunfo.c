#include <stdio.h>

int main() {

    // declaração das variáveis
    int opcaoEscolhida = 0, opcaoEscolhida2 = 0;
    int somaComparacao1 = 0, somaComparacao2 = 0;
    char estado1 = 'A', estado2 = 'B';
    char codigoCarta1[10] = "A01", codigoCarta2[10] = "B01";
    char nomeCidade1[20] = "São Paulo", nomeCidade2[20] = "Rio de Janeiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int numPontosTuristicos1 = 50, numPontosTuristicos2 = 30;
    double densidade1 = (double) populacao1 / area1, densidade2 = (double) populacao2 / area2;
    double pibPerCapita1 = (double) pib1 * 1000000000 / populacao1, pibPerCapita2 = (double) pib2 * 1000000000 / populacao2;

    // menu de seleção de atributos (geral)
    printf("Quais atributos você irá comparar?\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB Per Capita\n\n");
    
    // captura da primeira entrada do jogador
    scanf("%d", &opcaoEscolhida);

    // população
    switch (opcaoEscolhida) {
        case 1:
            // menu de seleção de atributos (população)
            printf("\n1 - Área\n");
            printf("2 - PIB\n");
            printf("3 - Pontos turísticos\n");
            printf("4 - Densidade demográfica\n");
            printf("5 - PIB Per Capita\n\n");

            // captura da segunda entrada do jogador
            scanf("%d", &opcaoEscolhida2);

            switch (opcaoEscolhida2) {
                case 1: // população x área
                    // exibição dos dados das cartas
                    printf("\nCARTA 1:\n");
                    printf("Cidade: %s\n", nomeCidade1);
                    printf("População: %lu\n", populacao1);
                    printf("Área: %f\n\n", area1);
                    printf("CARTA 2:\n");
                    printf("Cidade: %s\n", nomeCidade2);
                    printf("População: %lu\n", populacao2);
                    printf("Área: %f\n\n", area2);

                    // comparação atributo 1
                    if (populacao1 > populacao2) {
                        printf("A população da carta 1 é maior.\n");
                    } else if (populacao1 < populacao2) {
                        printf("A população da carta 2 é maior.");
                    } else {
                        printf("A população das cartas é igual.");
                    }

                    // comparação atributo 2
                    if (area1 > area2) {
                        printf("A área da carta 1 é maior.\n\n");
                    } else if (area1 < area2) {
                        printf("A área da carta 2 é maior.\n\n");
                    } else {
                        printf("A área das cartas é igual.\n\n");
                    }

                    // Soma atributo 1 + atributo 2
                    somaComparacao1 = populacao1 + area1;
                    somaComparacao2 = populacao2 + area2;

                    // Comparação dos dois atributos
                    if (somaComparacao1 > somaComparacao2) {
                        printf("A carta 1 venceu!");
                    } else if (somaComparacao1 < somaComparacao2) { 
                        printf("A carta 2 venceu!");
                    } else {
                        printf("Empate!");
                    }
                    break;

                case 2: // população x pib
                    // exibição dos dados das cartas
                    printf("\nCARTA 1:\n");
                    printf("Cidade: %s\n", nomeCidade1);
                    printf("População: %lu\n", populacao1);
                    printf("PIB: %f\n\n", pib1);
                    printf("CARTA 2:\n");
                    printf("Cidade: %s\n", nomeCidade2);
                    printf("População: %lu\n", populacao2);
                    printf("PIB: %f\n\n", pib2);

                    // comparação atributo 1
                    if (populacao1 > populacao2) {
                        printf("A população da carta 1 é maior.\n");
                    } else if (populacao1 < populacao2) {
                        printf("A população da carta 2 é maior.");
                    } else {
                        printf("A população das cartas é igual.");
                    }

                    // comparação atributo 2
                    if (pib1 > pib2) {
                        printf("O PIB da carta 1 é maior.\n\n");
                    } else if (pib1 < pib2) {
                        printf("O PIB da carta 2 é maior.\n\n");
                    } else {
                        printf("O PIB das cartas é igual.\n\n");
                    }

                    // Soma dos 2 atributos escolhidos para cada carta
                    somaComparacao1 = populacao1 + pib1;
                    somaComparacao2 = populacao2 + pib2;

                    // Comparação dos dois atributos
                    if (somaComparacao1 > somaComparacao2) {
                        printf("A carta 1 venceu!");
                    } else if (somaComparacao1 < somaComparacao2) { 
                        printf("A carta 2 venceu!");
                    } else {
                        printf("Empate!");
                    }
                    break;

                case 3: // população x pontos turísticos
                    // exibição dos dados das cartas
                    printf("\nCARTA 1:\n");
                    printf("Cidade: %s\n", nomeCidade1);
                    printf("População: %lu\n", populacao1);
                    printf("Número de pontos turísticos: %d\n\n", numPontosTuristicos1);
                    printf("CARTA 2:\n");
                    printf("Cidade: %s\n", nomeCidade2);
                    printf("População: %lu\n", populacao2);
                    printf("Número de pontos turísticos: %d\n\n", numPontosTuristicos2);

                    // comparação atributo 1
                    if (populacao1 > populacao2) {
                        printf("A população da carta 1 é maior.\n");
                    } else if (populacao1 < populacao2) {
                        printf("A população da carta 2 é maior.");
                    } else {
                        printf("A população das cartas é igual.");
                    }

                    // comparação atributo 2
                    if (numPontosTuristicos1 > numPontosTuristicos2) {
                        printf("O número de pontos turísticos da carta 1 é maior.\n\n");
                    } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                        printf("O número de pontos turísticos da carta 2 é maior.\n\n");
                    } else {
                        printf("O número de pontos turísticos das cartas é igual.\n\n");
                    }

                    // Soma dos 2 atributos escolhidos para cada carta
                    somaComparacao1 = populacao1 + numPontosTuristicos1;
                    somaComparacao2 = populacao2 + numPontosTuristicos2;   
                    
                    // Comparação dos dois atributos
                    if (somaComparacao1 > somaComparacao2) {
                        printf("A carta 1 venceu!");
                    } else if (somaComparacao1 < somaComparacao2) { 
                        printf("A carta 2 venceu!");
                    } else {
                        printf("Empate!");
                    }
                    break;

                case 4: // população x densidade demográfica
                    // exibição dos dados das cartas
                    printf("\nCARTA 1:\n");
                    printf("Cidade: %s\n", nomeCidade1);
                    printf("População: %lu\n", populacao1);
                    printf("Densidade demográfica: %f\n\n", densidade1);
                    printf("CARTA 2:\n");
                    printf("Cidade: %s\n", nomeCidade2);
                    printf("População: %lu\n", populacao2);
                    printf("Densidade demográfica: %f\n\n", densidade2);

                    // comparação atributo 1
                    if (populacao1 > populacao2) {
                        printf("A população da carta 1 é maior.\n");
                    } else if (populacao1 < populacao2) {
                        printf("A população da carta 2 é maior.");
                    } else {
                        printf("A população das cartas é igual.");
                    }

                    // comparação atributo 2
                    if (densidade1 < densidade2) {
                        printf("A densidade da carta 1 é menor.\n\n");
                    } else if (densidade1 > densidade2) {
                        printf("A densidade da carta 2 é maior.\n\n");
                    } else {
                        printf("A densidade das cartas são iguais.\n\n");
                    }

                    // Soma dos 2 atributos escolhidos para cada carta
                    somaComparacao1 = populacao1 + densidade1;
                    somaComparacao2 = populacao2 + densidade2;   
                    
                     // Comparação dos dois atributos
                     if (somaComparacao1 > somaComparacao2) {
                        printf("A carta 1 venceu!");
                    } else if (somaComparacao1 < somaComparacao2) { 
                        printf("A carta 2 venceu!");
                    } else {
                        printf("Empate!");
                    }
                    break;    

                case 5: // população x pib per capita
                    // exibição dos dados das cartas
                    printf("\nCARTA 1:\n");
                    printf("Cidade: %s\n", nomeCidade1);
                    printf("População: %lu\n", populacao1);
                    printf("PIB per capita: %lf\n\n", pibPerCapita1);
                    printf("CARTA 2:\n");
                    printf("Cidade: %s\n", nomeCidade2);
                    printf("População: %lu\n", populacao2);
                    printf("PIB per capita: %lf\n\n", pibPerCapita2);

                    // comparação atributo 1
                    if (populacao1 > populacao2) {
                        printf("A população da carta 1 é maior.\n");
                    } else if (populacao1 < populacao2) {
                        printf("A população da carta 2 é maior.");
                    } else {
                        printf("A população das cartas é igual.");
                    }

                    // comparação atributo 2
                    if (pibPerCapita1 > pibPerCapita2) {
                        printf("O PIB per capita da carta 1 é maior.\n\n");
                    } else if (pibPerCapita1 < pibPerCapita2) {
                        printf("O PIB per capita da carta 2 é maior.\n\n");
                    } else {
                        printf("O PIB per capita das cartas é igual.\n\n");
                    }

                    // Soma dos 2 atributos escolhidos para cada carta
                    somaComparacao1 = populacao1 + densidade1;
                    somaComparacao2 = populacao2 + densidade2;   
                    
                     // Comparação dos dois atributos
                     if (somaComparacao1 > somaComparacao2) {
                        printf("A carta 1 venceu!");
                    } else if (somaComparacao1 < somaComparacao2) { 
                        printf("A carta 2 venceu!");
                    } else {
                        printf("Empate!");
                    }
                    break;

                default:
                    printf("\nOpção inválida. Tente novamente!");
                    break;
                break;
            }

    case 2:
        // menu de seleção de atributos (área)
        printf("\n1 - População\n");
        printf("2 - PIB\n");
        printf("3 - Pontos turísticos\n");
        printf("4 - Densidade demográfica\n");
        printf("5 - PIB Per Capita\n\n");

        // captura da segunda entrada do jogador
        scanf("%d", &opcaoEscolhida2);

        switch (opcaoEscolhida2) {

            case 1: //area x populacao
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Área: %f\n\n", area1);
                printf("População: %lu\n", populacao1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Área: %f\n\n", area2);
                printf("População: %lu\n", populacao2);
                // comparação atributo 1
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.\n\n");
                } else {
                    printf("A área das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (populacao1 > populacao2) {
                    printf("A população da carta 1 é maior.\n");
                } else if (populacao1 < populacao2) {
                    printf("A população da carta 2 é maior.");
                } else {
                    printf("A população das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = area1 + populacao1;
                somaComparacao2 = area2 + populacao2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 2: //area x pib
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Área: %f\n\n", area1);
                printf("PIB: %f\n", pib1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Área: %f\n\n", area2);
                printf("PIB: %f\n", pib2);
                // comparação atributo 1
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.\n\n");
                } else {
                    printf("A área das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.");
                } else {
                    printf("O PIB das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = area1 + pib1;
                somaComparacao2 = area2 + pib2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 3: //area x pontos turisticos
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Área: %f\n\n", area1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Área: %f\n\n", area2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                // comparação atributo 1
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.\n\n");
                } else {
                    printf("A área das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = area1 + numPontosTuristicos1;
                somaComparacao2 = area2 + numPontosTuristicos2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 4: //area x densidade demografica
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Área: %f\n\n", area1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Área: %f\n\n", area2);
                printf("Densidade demográfica: %f\n", densidade2);
                // comparação atributo 1
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.\n\n");
                } else {
                    printf("A área das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.");
                } else {
                    printf("A densidade das cartas são iguais.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = area1 + densidade1;
                somaComparacao2 = area2 + densidade2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 5: //area x pib per capita
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Área: %f\n\n", area1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Área: %f\n\n", area2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                // comparação atributo 1
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.\n\n");
                } else {
                    printf("A área das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.");
                } else {
                    printf("O PIB per capita das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = area1 + pibPerCapita1;
                somaComparacao2 = area2 + pibPerCapita2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;
        }
    
    case 3:
        // menu de seleção de atributos (pib)
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - Pontos turísticos\n");
        printf("4 - Densidade demográfica\n");
        printf("5 - PIB Per Capita\n\n");

        // captura da segunda entrada do jogador
        scanf("%d", &opcaoEscolhida2);

        switch (opcaoEscolhida2) {

            case 1: //pib x populacao
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB: %f\n\n", pib1);
                printf("População: %lu\n", populacao1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB: %f\n\n", pib2);
                printf("População: %lu\n", populacao2);
                // comparação atributo 1
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (populacao1 > populacao2) {
                    printf("A população da carta 1 é maior.\n");
                } else if (populacao1 < populacao2) {
                    printf("A população da carta 2 é maior.");
                } else {
                    printf("A população das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pib1 + populacao1;
                somaComparacao2 = pib2 + populacao2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 2: //pib x area
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB: %f\n\n", pib1);
                printf("Área: %f\n", area1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB: %f\n\n", pib2);
                printf("Área: %f\n", area2);
                // comparação atributo 1
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.");
                } else {
                    printf("A área das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pib1 + area1;
                somaComparacao2 = pib2 + area2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 3: //pib x pontos turisticos
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB: %f\n\n", pib1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB: %f\n\n", pib2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                // comparação atributo 1
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pib1 + numPontosTuristicos1;
                somaComparacao2 = pib2 + numPontosTuristicos2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 4: //pib x densidade demografica
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB: %f\n\n", pib1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB: %f\n\n", pib2);
                printf("Densidade demográfica: %f\n", densidade2);
                // comparação atributo 1
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.");
                } else {
                    printf("A densidade das cartas são iguais.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pib1 + densidade1;
                somaComparacao2 = pib2 + densidade2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 5: //pib x pib per capita
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB: %f\n\n", pib1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB: %f\n\n", pib2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                // comparação atributo 1
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.");
                } else {
                    printf("O PIB per capita das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pib1 + pibPerCapita1;
                somaComparacao2 = pib2 + pibPerCapita2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;
        }

    case 4:
        // menu de seleção de atributos (pontos turisticos)
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade demográfica\n");
        printf("5 - PIB Per Capita\n\n");

        // captura da segunda entrada do jogador
        scanf("%d", &opcaoEscolhida2);

        switch (opcaoEscolhida2) {

            case 1: //pontos turisticos x populacao
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("População: %lu\n", populacao1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                printf("População: %lu\n", populacao2);
                // comparação atributo 1
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.\n\n");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (populacao1 > populacao2) {
                    printf("A população da carta 1 é maior.\n");
                } else if (populacao1 < populacao2) {
                    printf("A população da carta 2 é maior.");
                } else {
                    printf("A população das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = numPontosTuristicos1 + populacao1;
                somaComparacao2 = numPontosTuristicos2 + populacao2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 2: //pontos turisticos x area
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("Área: %f\n", area1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                printf("Área: %f\n", area2);
                // comparação atributo 1
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.\n\n");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.");
                } else {
                    printf("A área das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = numPontosTuristicos1 + area1;
                somaComparacao2 = numPontosTuristicos2 + area2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 3: //pontos turisticos x pib
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("PIB: %f\n", pib1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                printf("PIB: %f\n", pib2);
                // comparação atributo 1
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.\n\n");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.");
                } else {
                    printf("O PIB das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = numPontosTuristicos1 + pib1;
                somaComparacao2 = numPontosTuristicos2 + pib2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 4: //pontos turisticos x densidade demografica
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                printf("Densidade demográfica: %f\n", densidade2);
                // comparação atributo 1
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.\n\n");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.");
                } else {
                    printf("A densidade das cartas são iguais.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = numPontosTuristicos1 + densidade1;
                somaComparacao2 = numPontosTuristicos2 + densidade2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 5: //pontos turisticos x pib per capita
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                // comparação atributo 1
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.\n\n");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.");
                } else {
                    printf("O PIB per capita das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = numPontosTuristicos1 + pibPerCapita1;
                somaComparacao2 = numPontosTuristicos2 + pibPerCapita2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;
        }

    case 5:
        // menu de seleção de atributos (densidade demografica)
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - PIB Per Capita\n\n");

        // captura da segunda entrada do jogador
        scanf("%d", &opcaoEscolhida2);

        switch (opcaoEscolhida2) {
            case 1: //densidade demografica x populacao
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("População: %lu\n", populacao1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Densidade demográfica: %f\n", densidade2);
                printf("População: %lu\n", populacao2);
                // comparação atributo 1
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.\n\n");
                } else {
                    printf("A densidade das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (populacao1 > populacao2) {
                    printf("A população da carta 1 é maior.\n");
                } else if (populacao1 < populacao2) {
                    printf("A população da carta 2 é maior.");
                } else {
                    printf("A população das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = densidade1 + populacao1;
                somaComparacao2 = densidade2 + populacao2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 2: //densidade demografica x area
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("Área: %f\n", area1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Densidade demográfica: %f\n", densidade2);
                printf("Área: %f\n", area2);
                // comparação atributo 1
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.\n\n");
                } else {
                    printf("A densidade das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.");
                } else {
                    printf("A área das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = densidade1 + area1;
                somaComparacao2 = densidade2 + area2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 3: //densidade demografica x pib
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("PIB: %f\n", pib1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Densidade demográfica: %f\n", densidade2);
                printf("PIB: %f\n", pib2);
                // comparação atributo 1
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.\n\n");
                } else {
                    printf("A densidade das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.");
                } else {
                    printf("O PIB das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = densidade1 + pib1;
                somaComparacao2 = densidade2 + pib2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 4: //densidade demografica x pontos turisticos
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Densidade demográfica: %f\n", densidade2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                // comparação atributo 1
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.\n\n");
                } else {
                    printf("A densidade das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = densidade1 + numPontosTuristicos1;
                somaComparacao2 = densidade2 + numPontosTuristicos2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 5: //densidade demografica x pib per capita
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("Densidade demográfica: %f\n", densidade2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                // comparação atributo 1
                if (densidade1 < densidade2) {
                    printf("A densidade da carta 1 é menor.\n\n");
                } else if (densidade1 > densidade2) {
                    printf("A densidade da carta 2 é maior.\n\n");
                } else {
                    printf("A densidade das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.");
                } else {
                    printf("O PIB per capita das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = densidade1 + pibPerCapita1;
                somaComparacao2 = densidade2 + pibPerCapita2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;
        }

    case 6:
        // menu de seleção de atributos (pib per capita)
        printf("\n1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade demográfica\n\n");

        // captura da segunda entrada do jogador
        scanf("%d", &opcaoEscolhida2);

        switch (opcaoEscolhida2) {
            case 1: //pib per capita x populacao
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("População: %lu\n", populacao1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                printf("População: %lu\n", populacao2);
                // comparação atributo 1
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB per capita das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (populacao1 > populacao2) {
                    printf("A população da carta 1 é maior.\n");
                } else if (populacao1 < populacao2) {
                    printf("A população da carta 2 é maior.");
                } else {
                    printf("A população das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pibPerCapita1 + populacao1;
                somaComparacao2 = pibPerCapita2 + populacao2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 2: //pib per capita x area
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("Área: %f\n", area1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                printf("Área: %f\n", area2);
                // comparação atributo 1
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB per capita das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (area1 > area2) {
                    printf("A área da carta 1 é maior.\n");
                } else if (area1 < area2) {
                    printf("A área da carta 2 é maior.");
                } else {
                    printf("A área das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pibPerCapita1 + area1;
                somaComparacao2 = pibPerCapita2 + area2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 3: //pib per capita x pib
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("PIB: %f\n", pib1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                printf("PIB: %f\n", pib2);
                // comparação atributo 1
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB per capita das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior.\n");
                } else if (pib1 < pib2) {
                    printf("O PIB da carta 2 é maior.");
                } else {
                    printf("O PIB das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pibPerCapita1 + pib1;
                somaComparacao2 = pibPerCapita2 + pib2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

            case 4: //pib per capita x pontos turisticos
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
                // comparação atributo 1
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB per capita das cartas é igual.\n\n");
                }
                // comparação atributo 2
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 1 é maior.\n");
                } else if (numPontosTuristicos1 < numPontosTuristicos2) {
                    printf("O número de pontos turísticos da carta 2 é maior.");
                } else {
                    printf("O número de pontos turísticos das cartas é igual.");
                }
                // Soma atributo 1 + atributo 2
                somaComparacao1 = pibPerCapita1 + numPontosTuristicos1;
                somaComparacao2 = pibPerCapita2 + numPontosTuristicos2;
                // Comparação dos dois atributos
                if (somaComparacao1 > somaComparacao2) {
                    printf("A carta 1 venceu!");
                } else if (somaComparacao1 < somaComparacao2) { 
                    printf("A carta 2 venceu!");
                } else {
                    printf("Empate!");
                }
                break;

                case 5: //pib per capita x densidade demográfica
                // exibição dos dados das cartas
                printf("\nCARTA 1:\n");
                printf("Cidade: %s\n", nomeCidade1);
                printf("PIB per capita: %lf\n", pibPerCapita1);
                printf("Densidade demográfica: %f\n", densidade1);
                printf("CARTA 2:\n");
                printf("Cidade: %s\n", nomeCidade2);
                printf("PIB per capita: %lf\n", pibPerCapita2);
                printf("Densidade demográfica: %f\n", densidade2);
                // comparação atributo 1
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("O PIB per capita da carta 1 é maior.\n\n");
                } else if (pibPerCapita1 < pibPerCapita2) {
                    printf("O PIB per capita da carta 2 é maior.\n\n");
                } else {
                    printf("O PIB per capita das cartas é igual.\n\n");
                }
                // Aqui o fechamento de chaves estava faltando:
                break;
            
            default:
                printf("\nOpção inválida. Tente novamente!");
                break;
        break;
        }
    default:
        printf("\nOpção inválida. Tente novamente!");
        break;
    }
    return 0;
