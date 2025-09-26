#include <stdio.h> 
#include <stdlib.h> // Inlcui o srand() e rand()
#include <time.h> // Inclui o time

/* Exercício: Jogo de Jokenpo
*
* Objetivos:
* -Criar um menu interativo com as seguintes opções
* 1. Regras do jogo
* - Exibe as regras do jogo.
* 2. Iniciar o jogo
* - Criar um número aleatório para o computador.
* - Dar as opções para o jogador escolher.
* - Comparar o número do jogador com o número do usuário e exibir o vencedor.
* 3. Sair
*
*/

int main() {

    // Declaração das variaveis.
    int menuOptions, userNumber, machineNumber;
    int rock = 1, paper = 2, sissors = 3;

    // Gerando um número pseudo-aleatorio.
    srand(time(0));
    machineNumber = rand() % 3 + 1;


    // Menu interativo do jogo.
    printf(" -=-= Bem vindo ao jogo de Jokenpo =-=-\n");
    printf(" -= 1. Regras do jogo.\n");
    printf(" -= 2. Iniciar partida.\n");
    printf(" -= 3. Sair.\n");
    printf(" -= Escolha uma opção: ");
    scanf("%d", &menuOptions);

    
    switch (menuOptions) {
        case 1:
            printf(" -=-= Regras do jogo =-=-\n");
            printf(" -= Você pode escolher entre: Pedra, papel e tesoura. =-\n");
            printf(" -= O papel ganha da pedra. =-\n");
            printf(" -= A pedra ganha da tesoura. =-\n");
            printf(" -= A tesoura ganha do papel. =-\n");
            break;
        case 2:
            // Exibindo as opções para o usuário e recebendo o valor da escolha
            printf(" -=-= Jokenpo =-=-\n");
            printf(" -= 1. Pedra.\n");
            printf(" -= 2. Papel.\n");
            printf(" -= 3. Tesoura.\n");
            printf(" -= Escolha uma alternativa: ");
            scanf("%d", &userNumber);

            // Verificando a escolha do usuário
            switch (userNumber) {
                case 1:
                    printf(" -=-= Jokenpo =-=-\n");
                    printf(" -= Você escolheu: Pedra.\n");
                    break;
                case 2:
                    printf(" -=-= Jokenpo =-=-\n");
                    printf(" -= Você escolheu: Papel.\n");
                    break;
                case 3:
                    printf(" -=-= Jokenpo =-=-\n");
                    printf(" -= Você escolheu: Tesoura.\n");
                    break;
                default:
                    printf("Alternativa invalida.");
                    break;
            }

            // Verificando a escolha da maquina.
            switch (machineNumber) {
                case 1:
                    printf(" -= A maquina escolheu: Pedra.\n");
                    break;
                case 2:
                    printf(" -= A maquina escolheu: Papel.\n");
                    break;
                case 3:
                    printf(" -= A maquina escolheu: Tesoura.\n");
                    break;
                default:
                    break;
            }

            // Lógica para verificar o vencedor.
            if (userNumber == machineNumber) {
                printf(" -= O resultado é empate! =-\n");
            } else if ((userNumber == 1 && machineNumber == 3) ||
                       (userNumber == 2 && machineNumber == 1) ||
                       (userNumber == 3 && machineNumber == 2)) {
                           printf(" -= Você venceu! =-\n");
            } else {
                printf(" -= Você perdeu! =-\n");
            }

            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção invalida!\n");
    }

}
