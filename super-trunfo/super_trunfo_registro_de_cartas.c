// Incluindo as bibliotecas.
#include <stdio.h>
#include <string.h>

int main() { // Começo da execução.

    // Declaração das váriaveis.
    char estado[40], cartaCodigo[5], cidadeNome[40], estado_2[40], cartaCodigo_2[5], cidadeNome_2[40];
    int populacao, pontosTuristicos, populacao_2, pontosTuristicos_2;
    float areaEmKM, pib, areaEmKM_2, pib_2;

    printf("Digite as informações da carta número 1\n");

    printf("Estado: ");
    fgets(estado, 40, stdin); // Entrada de dado para estado.

    printf("Nome da cidade: ");
    fgets(cidadeNome, 40, stdin); // Entrada de dado para cidade.

    printf("Digite o código da carta: ");
    scanf("%s", &cartaCodigo); // Entrada de dado para código da carta.

    printf("População: ");
    scanf("%d", &populacao); // Entrada de dado para população.

    printf("Área em km²: ");
    scanf("%f", &areaEmKM); // Entrada de dado para área em km.

    printf("Digite o PIB: ");
    scanf("%f", &pib); // Entrada de dado para PIB.

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos); // Entrada de dado para pontos turísticos.

    // Retirando o "\n" criado pela função fgets
    estado[strcspn(estado, "\n")] = 0;
    cidadeNome[strcspn(cidadeNome, "\n")] = 0;

    // Calculando PIB per capita e Densidade Populacional
    float pibPerCapita = (pib / populacao);
    float densidadePopulacional = (populacao / areaEmKM);


    // Primeira impressão de dados, exibe informações da carta 1.

    printf("Informações da carta número 1:\n");
    printf("Estado: %s - Cidade: %s\n", estado, cidadeNome);
    printf("Código: %s - População: %d\n", cartaCodigo, populacao);
    printf("Área (km²): %.2f - PIB: %.2f\n", areaEmKM, pib);
    printf("Em %s tem %d pontos turísticos.\n", cidadeNome, pontosTuristicos);
    printf("O PIB per capita: %.2f\n", pibPerCapita);
    printf("Densidade Populacional: %.3f hab./km².\n", densidadePopulacional);

    // Função para pausar a execução do código.
    printf("Preciona ENTER para continuar. \n");
    getchar(); // getchar para ler a entrada padrão.
    getchar(); // usado duas vezes para descartar o dado recebido.

    printf("Digite as informações da carta número 2\n");

    printf("Estado: ");
    fgets(estado_2, 40, stdin); // Entrada de dado para estado.

    printf("Nome da cidade: ");
    fgets(cidadeNome_2, 40, stdin); // Entrada de dado para cidade.

    printf("Digite o código da carta: ");
    scanf("%s", &cartaCodigo_2); // Entrada de dados para código da carta.

    printf("População: ");
    scanf("%d", &populacao_2); // Entrada de dado para população.

    printf("Área em km²: ");
    scanf("%f", &areaEmKM_2); // Entrada de dado para área em km.

    printf("Digite o PIB: ");
    scanf("%f", &pib_2); // Entrada de dado para PIB.

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos_2); // Entrada de dado para pontos turísticos.

    // Retirando o "\n" criado pela função fgets
    estado_2[strcspn(estado_2, "\n")] = 0;
    cidadeNome_2[strcspn(cidadeNome_2, "\n")] = 0;

    // Calculando PIB per capita e Densidade Populacional da segunda carta.
    float pibPerCapita_2 = (pib_2 / populacao_2);
    float densidadePopulacional_2 = (populacao_2 / areaEmKM_2);

    // Segunda impressão de dados, exibe informações da carta 2.
    printf("Informações da carta número 2:\n");
    printf("Estado: %s - Cidade: %s\n", estado_2, cidadeNome_2);
    printf("Código: %s - População: %d\n", cartaCodigo_2, populacao_2);
    printf("Área (km²): %.2f - PIB: %.2f\n", areaEmKM_2, pib_2);
    printf("Em %s tem %d pontos turísticos.\n", cidadeNome_2, pontosTuristicos_2);
    printf("O PIB per capita: %.2f\n", pibPerCapita_2);
    printf("Densidade Populacional: %.3f hab./km².\n", densidadePopulacional_2);

    // Função para pausar a execução do código.
    printf("Preciona ENTER para exibir a carta vencedora em relação a quantidade de pontos turisticos. \n");
    getchar(); // getchar para ler a entrada padrão.
    getchar(); // usado duas vezes para descartar o dado recebido.

    // Estrutura de decisão para verificar qual das duas cartas possue mais pontos turisticos.
    if(pontosTuristicos > pontosTuristicos_2) {
        // Bloco de código caso carta 1 seja maior que carta 2
        printf("Carta 1: %s: %i.\n", cidadeNome, pontosTuristicos);
        printf("Carta 2: %s: %i.\n", cidadeNome_2, pontosTuristicos_2);
        printf("Resultado: A Carta 1 (%s) é a vencedora.\n", cidadeNome);
    } else {
        // Bloco de código caso carta 2 seja maior que carta 1
        printf("Carta 1- %s: %i.\n", cidadeNome, pontosTuristicos);
        printf("Carta 2- %s: %i.\n", cidadeNome_2, pontosTuristicos_2);
        printf("A Carta %s é a vencedora.\n", cartaCodigo_2);
    }

    return 0; // Indica que o programa terminou a execução.

}