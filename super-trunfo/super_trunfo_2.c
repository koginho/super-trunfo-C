// Incluindo as bibliotecas.
#include <stdio.h>
#include <string.h>

int main()
{ // Começo da execução.

    // Cidade número 1.
    char estado[40] = "São Paulo", cartaCodigo[5] = "SP-1", cidadeNome[40] = "Campinas.";
    int populacao = 1139047, pontosTuristicos = 5;
    float areaEmKM = 794571, pib = 72946774.92, densidadePopulacional = (populacao / areaEmKM);

    // Cidade número 2.
    char estado_2[40] = "Minas Gerais", cartaCodigo_2[5] = "MG-1", cidadeNome_2[40] = "Contagem";
    int populacao_2 = 621865, pontosTuristicos_2 = 15;
    float areaEmKM_2 = 195045, pib_2 = 36479764.96, densidadePopulacional_2 = (populacao_2 / areaEmKM_2);

    // Cidade número 3.
    char estado_3[40] = "Ceará", cartaCodigo_3[5] = "CE-1", cidadeNome_3[40] = "Milagres";
    int populacao_3 = 28316, pontosTuristicos_3 = 30;
    float areaEmKM_3 = 605193, pib_3 = 87198.973, densidadePopulacional_3 = (populacao_3 / areaEmKM_3);

    // Cidade número 4.
    char estado_4[40] = "Rio Grande do Sul", cartaCodigo_4[5] = "RS-1", cidadeNome_4[40] = "Osório";
    int populacao_4 = 47396, pontosTuristicos_4 = 2;
    float areaEmKM_4 = 663878, pib_4 = 1695496.57, densidadePopulacional_4 = (populacao_4 / areaEmKM_4);

    // Variáveis do menu interativo.
    int userOption, player_1, player_2, attributeChoosed;

    printf("-=-= Bem vindo ao Super trunfo em C =-=-\n");
    printf("-= 1. Regras.\n");
    printf("-= 2. Iniciar.\n");
    printf("-= 3. Sair.\n");
    printf("-= Escolha uma opção: ");
    scanf("%d", &userOption);

    // Menu
    switch (userOption)
    {
    case 1:
        printf("-= Regras =-\n");
        break;
    case 2:

        // Exibindo as cartas e coletando a escolha do usuário.
        printf("-= Super Trunfo C =-\n");
        printf("-= 1. Campinas - São Paulo.\n");
        printf("-= 2. Contagem - Minas Gerais.\n");
        printf("-= 3. Milagres - Ceará.\n");
        printf("-= 4. Osório - Rio Grande do Sul.\n");
        printf("-= Escolha a primeira carta: ");
        scanf("%d", &player_1);

        // Exibindo para para o usuário a primeira carta escolhida.
        switch (player_1)
        {
        case 1:
            printf("Carta escolhida: Campinas - São Paulo.\n");
            break;
        case 2:
            printf("Carta escolhida: Contagem - Minas Gerais.\n");
            break;
        case 3:
            printf("Carta escolhida: Milagres - Ceará.\n");
            break;
        case 4:
            printf("Carta escolhida: Osório - Rio Grande do Sul.\n");
            break;
        default:
            printf("Carta invalida...\n");
            break;
        }

        printf("-= Super Trunfo C =-\n");
        printf("-= 1. Campinas - São Paulo.\n");
        printf("-= 2. Contagem - Minas Gerais.\n");
        printf("-= 3. Milagres - Ceará.\n");
        printf("-= 4. Osório - Rio Grande do Sul.\n");
        printf("-= Escolha a segunda carta: ");
        scanf("%d", &player_2);

        // Exibindo para para o usuário a segunda carta escolhida.
        switch (player_2)
        {
        case 1:
            printf("Carta escolhida: Campinas - São Paulo.\n");
            break;
        case 2:
            printf("Carta escolhida: Contagem - Minas Gerais.\n");
            break;
        case 3:
            printf("Carta escolhida: Milagres - Ceará.\n");
            break;
        case 4:
            printf("Carta escolhida: Osório - Rio Grande do Sul.\n");
            break;
        default:
            printf("Carta invalida...\n");
            break;
        }

        // Escolha do atributo a ser comparado
        printf("-= Super Trunfo C =-\n");
        printf("-= 1. População.\n");
        printf("-= 2. Área.\n");
        printf("-= 3. PIB.\n");
        printf("-= 4. Número de pontos turísticos.\n");
        printf("-= 5. Densidade demográfica.\n");
        printf("-= Escolha o atributo que vai ser comparado: ");
        scanf("%d", &attributeChoosed);

        switch (attributeChoosed)
        {
        case 1: // População
            // Lógica do jogo para verificar o vencedor
            if (player_1 == player_2)
            {
                printf("-= Ambos os jogadores escolheram a mesma carta.\n");
                printf("-= Resultado: Empate!\n");
            }
            else if (player_1 == 1)
            {
                if (player_2 == 2)
                {
                    if (populacao > populacao_2)
                    {
                        printf("-= Super Trunfo C =-\n");
                        printf("-= O atributo escolhido foi: População.\n");
                        printf("-= Primeira carta: %s - População: %d\n", cartaCodigo, populacao);
                        printf("-= Segunda carta: %s - População: %d\n", cartaCodigo_2, populacao_2);
                        if (populacao > populacao_2)
                        {
                            printf("-= Resultado: Primeira carta venceu!\n");
                        }
                        else
                        {
                            printf("-= Resultado: Segunda carta venceu!\n");
                        }
                    }
                }
                else if (player_2 == 3)
                {
                    if (populacao > populacao_3)
                    {
                        printf("-= Super Trunfo C =-\n");
                        printf("-= O atributo escolhido foi: População.\n");
                        printf("-= Primeira carta: %s - População: %d\n", cartaCodigo, populacao);
                        printf("-= Segunda carta: %s - População: %d\n", cartaCodigo_3, populacao_3);
                        if (populacao > populacao_3)
                        {
                            printf("-= Resultado: Primeira carta venceu!\n");
                        }
                        else
                        {
                            printf("-= Resultado: Segunda carta venceu!\n");
                        }
                    }
                }
                else if (player_2 == 4)
                {
                    if (populacao > populacao_4)
                    {
                        printf("-= Super Trunfo C =-\n");
                        printf("-= O atributo escolhido foi: População.\n");
                        printf("-= Primeira carta: %s - População: %d\n", cartaCodigo, populacao);
                        printf("-= Segunda carta: %s - População: %d\n", cartaCodigo_4, populacao_4);
                        if (populacao > populacao_4)
                        {
                            printf("-= Resultado: Primeira carta venceu!\n");
                        }
                        else
                        {
                            printf("-= Resultado: Segunda carta venceu!\n");
                        }
                    }
                }
            }
            else if (player_1 == 2)
            {
                // MG
            }
            else if (player_1 == 3)
            {
                // CE
            }
            else if (player_1 == 4)
            {
                // RS
            }
            break;
        case 2:
            printf("-= Atributo escolhido: Área.\n");
            break;
        case 3:
            printf("-= Atributo escolhido: PIB.\n");
            break;
        case 4:
            printf("-= Atributo escolhido: Número de pontos turísticos.\n");
            break;
        case 5:
            printf("-= Atributo escolhido: Densidade demográfica.\n");
            break;
        default:
            printf("Alternativa invalida!\n");
            break;
        }

        break;
    case 3:
        printf("Saindo...");
        break;
    default:
        printf("Opção invalida!..");
        break;
    }

    return 0; // Indica que o programa terminou a execução.
}