// Incluindo as bibliotecas.
#include <stdio.h>
#include <string.h>

int main() { // Começo da execução.

    // Declaração das váriaveis.
    char estado[40], cartaCodigo[5], cidadeNome[40];
    int populacao, pontosTuristicos;
    float areaEmKM, pib;

    printf("Digite as informações da carta número 1\n");

    printf("Estado: ");
    fgets(estado, 40, stdin); // Entrada de dado para estado.

    printf("Nome da cidade: ");
    fgets(cidadeNome, 40, stdin); // Entrada de dado para cidade.

    printf("Digite o código da carta: ");
    scanf("%s", &cartaCodigo);

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

    // Primeira impressão de dados.
    printf("Informações da carta número 1:\n");
    printf("Estado: %s - Cidade: %s\n", estado, cidadeNome);
    printf("Código: %s - População: %d\n", cartaCodigo, populacao);
    printf("Área (km²): %.2f - PIB: %.2f\n", areaEmKM, pib);
    printf("Em %s tem %d pontos turísticos.\n", cidadeNome, pontosTuristicos);

    // Função para pausar a execução do código.
    printf("Preciona ENTER para continuar. \n");
    getchar(); // getchar para ler a entrada padrão.
    getchar(); // usado duas vezes para descartar o dado recebido.

    printf("Digite as informações da carta número 2\n");

    printf("Estado: ");
    fgets(estado, 40, stdin); // Entrada de dado para estado.

    printf("Nome da cidade: ");
    fgets(cidadeNome, 40, stdin); // Entrada de dado para cidade.

    printf("Digite o código da carta: ");
    scanf("%s", &cartaCodigo);

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

    // Segunda impressão de dados.
    printf("Informações da carta número 2:\n");
    printf("Estado: %s - Cidade: %s\n", estado, cidadeNome);
    printf("Código: %s - População: %d\n", cartaCodigo, populacao);
    printf("Área (km²): %.2f - PIB: %.2f\n", areaEmKM, pib);
    printf("Em %s tem %d pontos turísticos.\n", cidadeNome, pontosTuristicos);

    return 0; // Indica que o programa terminou a execução.

}