#include <stdio.h>
#include <string.h>

int main()
{
    // Cidade número 1.
    char estado[40] = "São Paulo", cartaCodigo[5] = "SP-1", cidadeNome[40] = "Campinas";
    int populacao = 1139047, pontosTuristicos = 5;
    float areaEmKM = 794.571, pib = 72946774.92, densidadePopulacional = (float)populacao / areaEmKM;

    // Cidade número 2.
    char estado_2[40] = "Ceará", cartaCodigo_2[5] = "CE-1", cidadeNome_2[40] = "Milagres";
    int populacao_2 = 28316, pontosTuristicos_2 = 30;
    float areaEmKM_2 = 605.193, pib_2 = 87198.973, densidadePopulacional_2 = (float)populacao_2 / areaEmKM_2;

    // Variáveis do menu interativo.
    int userOption, player_1, player_2, attributeChoosed, attributeChoosed_2;
    float player_1_att_1, player_1_att_2, player_2_att_1, player_2_att_2;

    // Exibindo opções do menu.

    printf("-=-= Bem vindo ao Super trunfo em C =-=-\n");
    printf("-= 1. Regras.\n");
    printf("-= 2. Iniciar.\n");
    printf("-= 3. Sair.\n");
    printf("-= Escolha uma opção: ");
    scanf("%d", &userOption);

    // Lógica do menu.
    switch (userOption)
    {
    case 1: // REGRAS
        printf("-= Regras =-\n");
        printf("-= 1. Cada jogador escolhe uma carta.\n");
        printf("-= 2. O primeiro jogador escolhe o atributo a ser comparado.\n");
        printf("-= 3. Comparação, os jogadores verificam qual das cartas venceu.\n");
        printf("-= 4. O vencedor da primeira rodada escolhere o proximo atributo.");
        break;
    case 2: // INICIAR

        // Exibe as cartas para o usuário e armazena a carta escolhida
        printf("-= Super Trunfo C =-\n");
        printf("-= 1. %s - %s.\n", cidadeNome, estado);
        printf("-= 2. %s - %s.\n", cidadeNome_2, estado_2);
        printf("-= Escolha a primeira carta: ");
        scanf("%d", &player_1);

        // Verifica se a carta escolhida é válida.
        if (player_1 >= 1 && player_1 <= 2)
        {
        }
        else
        {
            printf("Carta inválida...\n");
            return 0;
        }

        // Armazena o valor da segunda carta.
        printf("-= Escolha a segunda carta: ");
        scanf("%d", &player_2);

        // Verifica se a carta escolhida é válida.
        if (player_2 >= 1 && player_2 <= 2)
        {
        }
        else
        {
            printf("Carta inválida...\n");
            return 0;
        }

        // Exibindo cartas escolhidas
        switch (player_1)
        {
        case 1:
            printf("Primeira carta: %s - %s\n", cidadeNome, estado);
            break;
        case 2:
            printf("Primeira carta: %s - %s\n", cidadeNome_2, estado_2);
            break;
        default:
            break;
        }

        switch (player_2)
        {
        case 1:
            printf("Segunda carta: %s - %s\n", cidadeNome, estado);
            break;
        case 2:
            printf("Segunda carta: %s - %s\n", cidadeNome_2, estado_2);
            break;
        default:
            break;
        }

        // Verificando se ambas as cartas são iguais
        if (player_1 == player_2)
        {
            printf("O jogo empatou!\n");
            return 0;
        }

        // Exibe os atributos disponíveis e armazena o valor.
        printf("-=-=-=-=-=-=-=-=-=-=-\n");
        printf("-= Super Trunfo C =-\n");
        printf("-= 1. População.\n");
        printf("-= 2. Área.\n");
        printf("-= 3. PIB.\n");
        printf("-= 4. Número de pontos turísticos.\n");
        printf("-= 5. Densidade demográfica.\n");
        printf("-= Escolha o primeiro atributo a ser comparado: ");
        scanf("%d", &attributeChoosed);

        printf("-= Escolha o segundo atributo a ser comparado: ");
        scanf("%d", &attributeChoosed_2);

        printf("-=-=-=-=-=-=-=-=-=-=-\n");

        switch (attributeChoosed)
        {
        case 1:
            /* populacao */

            printf("-= O primeiro atributo escolhido foi: População.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_1 = populacao;
                printf("-= A população da primeira carta é: %d\n", populacao);
                break;
            case 2:
                player_1_att_1 = populacao_2;
                printf("-= A população da primeira carta é: %d\n", populacao_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_1 = populacao;
                printf("-= A população da segunda carta é: %d\n", populacao);
                break;
            case 2:
                player_2_att_1 = populacao_2;
                printf("-= A população da segunda carta é: %d\n", populacao_2);
                break;
            default:
                break;
            }

            break;
        case 2:
            /* area */

            printf("-= O primeiro atributo escolhido foi: Área.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_1 = areaEmKM;
                printf("-= A área da primeira carta é: %.3f\n", areaEmKM);
                break;
            case 2:
                player_1_att_1 = areaEmKM_2;
                printf("-= A área da primeira carta é: %.3f\n", areaEmKM_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_1 = areaEmKM;
                printf("-= A área da segunda carta é: %.3f\n", areaEmKM);
                break;
            case 2:
                player_2_att_1 = areaEmKM_2;
                printf("-= A área da segunda carta é: %.3f\n", areaEmKM_2);
                break;
            default:
                break;
            }

            break;
        case 3:
            /* pib */

            printf("-= O primeiro atributo escolhido foi: PIB.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_1 = pib;
                printf("-= O PIB da primeira carta é: %.2f\n", pib);
                break;
            case 2:
                player_1_att_1 = pib_2;
                printf("-= O PIB da primeira carta é: %.2.3f\n", pib_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_1 = pib;
                printf("-= O PIB da segunda carta é: %.2.3f\n", pib);
                break;
            case 2:
                player_2_att_1 = pib_2;
                printf("-= O PIB da segunda carta é: %.2.3f\n", pib_2);
                break;
            default:
                break;
            }

            break;
        case 4:
            /* pontos turisticos */

            printf("-= O primeiro atributo escolhido foi: Pontos turísticos.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_1 = pontosTuristicos;
                printf("-= A primeira carta tem: %d\n", pontosTuristicos);
                break;
            case 2:
                player_1_att_1 = pontosTuristicos_2;
                printf("-= A primeira carta tem: %d\n", pontosTuristicos_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_1 = pontosTuristicos;
                printf("-= A segunda carta tem: %d\n", pontosTuristicos);
                break;
            case 2:
                player_2_att_1 = pontosTuristicos_2;
                printf("-= A segunda carta tem: %d\n", pontosTuristicos_2);
                break;
            default:
                break;
            }
            break;
        case 5:
            /* densidade demografica */

            printf("-= O primeiro atributo escolhido foi: Densidade demográfica.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_1 = densidadePopulacional;
                printf("-= A densidade demográfica da primeira carta é: %.1f\n", densidadePopulacional);
                break;
            case 2:
                player_1_att_1 = densidadePopulacional_2;
                printf("-= A densidade demográfica da primeira carta é: %.1f\n", densidadePopulacional_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_1 = densidadePopulacional;
                printf("-= Adensidade demográfica da  segunda carta é: %.1f\n", densidadePopulacional);
                break;
            case 2:
                player_2_att_1 = densidadePopulacional_2;
                printf("-= Adensidade demográfica da  segunda carta é: %.1f\n", densidadePopulacional_2);
                break;
            default:
                break;
            }

            break;
        default:
            printf("-= Atributo inválido...\n");
            return 0;
            break;
        }

        switch (attributeChoosed_2)
        {
        case 1:
            /* populacao */

            printf("-= O segundo atributo escolhido foi: População.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_2 = populacao;
                printf("-= A população da primeira carta é: %d\n", populacao);
                break;
            case 2:
                player_1_att_2 = populacao_2;
                printf("-= A população da primeira carta é: %d\n", populacao_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_2 = populacao;
                printf("-= A população da segunda carta é: %d\n", populacao);
                break;
            case 2:
                player_2_att_2 = populacao_2;
                printf("-= A população da segunda carta é: %d\n", populacao_2);
                break;
            default:
                break;
            }

            break;
        case 2:
            /* area */

            printf("-= O segundo atributo escolhido foi: Área.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_2 = areaEmKM;
                printf("-= A área da primeira carta é: %.3f\n", areaEmKM);
                break;
            case 2:
                player_1_att_2 = areaEmKM_2;
                printf("-= A área da primeira carta é: %.3f\n", areaEmKM_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_2 = areaEmKM;
                printf("-= A área da segunda carta é: %.3f\n", areaEmKM);
                break;
            case 2:
                player_2_att_2 = areaEmKM_2;
                printf("-= A área da segunda carta é: %.3f\n", areaEmKM_2);
                break;
            default:
                break;
            }

            break;
        case 3:
            /* pib */

            printf("-= O segundo atributo escolhido foi: PIB.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_2 = pib;
                printf("-= O PIB da primeira carta é: %.2f\n", pib);
                break;
            case 2:
                player_1_att_2 = pib_2;
                printf("-= O PIB da primeira carta é: %.2f\n", pib_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_2 = pib;
                printf("-= O PIB da segunda carta é: %.2f\n", pib);
                break;
            case 2:
                player_2_att_2 = pib_2;
                printf("-= O PIB da segunda carta é: %.2f\n", pib_2);
                break;
            default:
                break;
            }

            break;
        case 4:
            /* pontos turisticos */

            printf("-= O segundo atributo escolhido foi: Pontos turísticos.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_2 = pontosTuristicos;
                printf("-= A primeira carta tem: %d\n", pontosTuristicos);
                break;
            case 2:
                player_1_att_2 = pontosTuristicos_2;
                printf("-= A primeira carta tem: %d\n", pontosTuristicos_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_2 = pontosTuristicos;
                printf("-= A segunda carta tem: %d\n", pontosTuristicos);
                break;
            case 2:
                player_2_att_2 = pontosTuristicos_2;
                printf("-= A segunda carta tem: %d\n", pontosTuristicos_2);
                break;
            default:
                break;
            }

            break;
        case 5:
            /* densidade demografica */

            printf("-= O segundo atributo escolhido foi: Densidade demográfica.\n");

            switch (player_1)
            {
            case 1:
                player_1_att_2 = densidadePopulacional;
                printf("-= A densidade demográfica da primeira carta é: %.1f\n", densidadePopulacional);
                break;
            case 2:
                player_1_att_2 = densidadePopulacional_2;
                printf("-= A densidade demográfica da primeira carta é: %.1f\n", densidadePopulacional_2);
                break;
            default:
                break;
            }

            switch (player_2)
            {
            case 1:
                player_2_att_2 = densidadePopulacional;
                printf("-= Adensidade demográfica da  segunda carta é: %.1f\n", densidadePopulacional);
                break;
            case 2:
                player_2_att_2 = densidadePopulacional_2;
                printf("-= Adensidade demográfica da  segunda carta é: %.1f\n", densidadePopulacional_2);
                break;
            default:
                break;
            }

            break;
        default:
            printf("-= Atributo inválido...\n");
            return 0;
            break;
        }

        // Função para pausar a execução do código.
        printf("Preciona ENTER para exibir o resultado. \n");
        getchar();
        getchar();

        // Verifica o vencedor.
        if ((player_1_att_1 + player_1_att_2) > (player_2_att_1 + player_2_att_2))
        {
            printf("-= A primeira carta é a vencedora. =-\n");
        }
        else if ((player_1_att_1 + player_1_att_2) == (player_2_att_1 + player_2_att_2))
        {
            printf("-= O jogo empatou! =-\n");
        }
        else
        {
            printf("-= A segunda carta é a vencedora. =-\n");
        }

        break;
    case 3: // SAIR
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida...\n");
        break;
    }
}