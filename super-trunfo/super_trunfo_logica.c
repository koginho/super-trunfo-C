// Incluindo as bibliotecas.
#include <stdio.h>
#include <string.h>

int main()
{ // Começo da execução.

    // Cidade número 1.
    char estado[40] = "São Paulo", cartaCodigo[5] = "SP-1", cidadeNome[40] = "Campinas.";
    int populacao = 1139047, pontosTuristicos = 5;
    float areaEmKM = 794, pib = 72946774.92, densidadePopulacional = (float) populacao / areaEmKM;

    // Cidade número 2.
    char estado_2[40] = "Ceará", cartaCodigo_2[5] = "CE-1", cidadeNome_2[40] = "Milagres";
    int populacao_2 = 28316, pontosTuristicos_2 = 30;
    float areaEmKM_2 = 605, pib_2 = 87198.973, densidadePopulacional_2 = (float) populacao_2 / areaEmKM_2;

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
        printf("-= 1. Cada jogador escolhe uma carta.\n");
        printf("-= 2. O primeiro jogador escolhe o atributo a ser comparado.\n");
        printf("-= 3. Comparação, os jogadores verificam qual das cartas venceu.\n");
        printf("-= 4. O vencedor da primeira rodada escolhere o proximo atributo.");
        break;
    case 2:

        // Exibindo as cartas e coletando a escolha do usuário.
        printf("-= Super Trunfo C =-\n");
        printf("-= 1. Campinas - São Paulo.\n");
        printf("-= 2. Milagres - Ceará.\n");
        printf("-= Escolha a primeira carta: ");
        scanf("%d", &player_1);

        // Exibindo para para o usuário a primeira carta escolhida.
        switch (player_1)
        {
        case 1:
            printf("Carta escolhida: Campinas - São Paulo.\n");
            break;
        case 2:
            printf("Carta escolhida: Milagres - Ceará.\n");
            break;
        default:
            printf("Carta invalida...\n");
            break;
        }

        printf("-=-=-=-=-=-=-=-=-=-=-\n");
        printf("-= Super Trunfo C =-\n");
        printf("-= 1. Campinas - São Paulo.\n");
        printf("-= 2. Milagres - Ceará.\n");
        printf("-= Escolha a segunda carta: ");
        scanf("%d", &player_2);

        // Exibindo para para o usuário a segunda carta escolhida.
        switch (player_2)
        {
        case 1:
            printf("Carta escolhida: Campinas - São Paulo.\n");
            break;
        case 2:
            printf("Carta escolhida: Milagres - Ceará.\n");
            break;
        default:
            printf("Carta invalida...\n");
            break;
        }

        // Escolha do atributo a ser comparado
        printf("-=-=-=-=-=-=-=-=-=-=-\n");
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
            if (player_1 == player_2) // Verificar se o jogo empatou.
            {
                printf("-= Ambos os jogadores escolheram a mesma carta.\n");
                printf("-= Resultado: Empate!\n");
            }

            else if (player_1 == 1 && player_2 == 2)
            {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: População.\n");
                printf("-= Primeira carta: %s - População: %d\n", cartaCodigo, populacao);
                printf("-= Segunda carta: %s - População: %d\n", cartaCodigo_2, populacao_2);
                if (populacao > populacao_2)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (populacao_2 > populacao)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                } 
                else
                {
                    printf("-= Resultado: Empate!\n");
                }

            } else if (player_1 == 2 && player_2 == 1) {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: População.\n");
                printf("-= Primeira carta: %s - População: %d\n", cartaCodigo_2, populacao_2);
                printf("-= Segunda carta: %s - População: %d\n", cartaCodigo, populacao);
                if (populacao_2 > populacao)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (populacao > populacao_2)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                } 
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            }
            break;

        case 2:
            printf("-= Atributo escolhido: Área.\n");
            if (player_1 == player_2) // Verificar se o jogo empatou.
            {
                printf("-= Ambos os jogadores escolheram a mesma carta.\n");
                printf("-= Resultado: Empate!\n");
            }
            else if (player_1 == 1 && player_2 == 2)
            {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: Área.\n");
                printf("-= Primeira carta: %s - Área: %.2f\n", cartaCodigo, areaEmKM);
                printf("-= Segunda carta: %s - Área: %.2f\n", cartaCodigo_2, areaEmKM_2);
                if (areaEmKM > areaEmKM_2)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (areaEmKM_2 > areaEmKM)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                }
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            } else if (player_1 == 2 && player_2 == 1) {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: Área.\n");
                printf("-= Primeira carta: %s - Área: %.2f\n", cartaCodigo_2, areaEmKM_2);
                printf("-= Segunda carta: %s - Área: %.2f\n", cartaCodigo, areaEmKM);
                if (areaEmKM_2 > areaEmKM)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (areaEmKM > areaEmKM_2)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                } 
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            }
            break;

        case 3:
            printf("-= Atributo escolhido: PIB.\n");
            if (player_1 == player_2) // Verificar se o jogo empatou.
            {
                printf("-= Ambos os jogadores escolheram a mesma carta.\n");
                printf("-= Resultado: Empate!\n");
            }
            else if (player_1 == 1 && player_2 == 2)
            {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: PIB.\n");
                printf("-= Primeira carta: %s - PIB: %.2f\n", cartaCodigo, pib);
                printf("-= Segunda carta: %s - PIB: %.2f\n", cartaCodigo_2, pib_2);
                if (pib > pib_2)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (pib_2 > pib)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                }
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            } else if (player_1 == 2 && player_2 == 1) {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: PIB.\n");
                printf("-= Primeira carta: %s - PIB: %.2f\n", cartaCodigo_2, pib_2);
                printf("-= Segunda carta: %s - PIB: %.2f\n", cartaCodigo, pib);
                if (pib_2 > pib)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (pib > pib_2)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                } 
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            }
            break;

        case 4:
            printf("-= Atributo escolhido: Número de pontos turísticos.\n");
            if (player_1 == player_2) // Verificar se o jogo empatou.
            {
                printf("-= Ambos os jogadores escolheram a mesma carta.\n");
                printf("-= Resultado: Empate!\n");
            }
            else if (player_1 == 1 && player_2 == 2)
            {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: Pontos turísticos.\n");
                printf("-= Primeira carta: %s - Pontos turísticos: %d\n", cartaCodigo, pontosTuristicos);
                printf("-= Segunda carta: %s - Pontos turísticos: %d\n", cartaCodigo_2, pontosTuristicos_2);
                if (pontosTuristicos > pontosTuristicos_2)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (pontosTuristicos_2 > pontosTuristicos)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                }
                else
                {
                    printf("-= Resultado: Empate.\n");
                }
            } else if (player_1 == 2 && player_2 == 1) {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: Pontos turísticos.\n");
                printf("-= Primeira carta: %s - Pontos turísticos: %d\n", cartaCodigo_2, pontosTuristicos_2);
                printf("-= Segunda carta: %s - Pontos turísticos: %d\n", cartaCodigo, pontosTuristicos);
                if (pontosTuristicos_2 > pontosTuristicos)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (pontosTuristicos > pontosTuristicos_2)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                } 
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            }
            break;

        case 5:
            printf("-= Atributo escolhido: Densidade demográfica.\n");
            if (player_1 == player_2) // Verificar se o jogo empatou.
            {
                printf("-= Ambos os jogadores escolheram a mesma carta.\n");
                printf("-= Resultado: Empate!\n");
            }
            else if (player_1 == 1 && player_2 == 2)
            {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: Densidade demográfica.\n");
                printf("-= Primeira carta: %s - Densidade demográfica: %.4f\n", cartaCodigo, densidadePopulacional);
                printf("-= Segunda carta: %s - Densidade demográfica: %.4f\n", cartaCodigo_2, densidadePopulacional_2);
                if (densidadePopulacional < densidadePopulacional_2)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (densidadePopulacional_2 < densidadePopulacional)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                }
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            } else if (player_1 == 2 && player_2 == 1) {
                printf("-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Super Trunfo C =-\n");
                printf("-= O atributo escolhido foi: Densidade demográfica.\n");
                printf("-= Primeira carta: %s - Densidade demográfica: %.4f\n", cartaCodigo_2, densidadePopulacional_2);
                printf("-= Segunda carta: %s - Densidade demográfica: %.4f\n", cartaCodigo, densidadePopulacional);
                if (densidadePopulacional_2 < densidadePopulacional)
                {
                    printf("-= Resultado: Primeira carta venceu!\n");
                }
                else if (densidadePopulacional < densidadePopulacional_2)
                {
                    printf("-= Resultado: Segunda carta venceu!\n");
                } 
                else
                {
                    printf("-= Resultado: Empate!\n");
                }
            }
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

}
