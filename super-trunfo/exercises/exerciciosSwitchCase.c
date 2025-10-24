#include <stdio.h>

/*
* Exercício com Switch, o objetivo é simular um aplicativo de banco.
*
* Objetivo:
* - Exibir 3 opções que o usuário possa escolher as opções são:
* 1. Verificar o saldo que tem em sua conta.
* 2. Fazer um deposito, que deverá ser somado ao saldo de sua conta.
* 3. Fazer um saque, que deverá descontar um valor do saldo de sua conta.
*
*/

int main (){
    
    // Declarando variável
    int option;
    int balance = 3000;
    int deposit, sake;

    // Exibindo as opções ao usuário e recebendo o valor da opção escolhida.
    printf("1. Verifique o saldo.\n");
    printf("2. Faça um deposito.\n");
    printf("3. Faça um saque.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &option);

    // Estrutura de decisão para verificar qual opção o usuário escolheu.
    switch (option) {
        // Verifica o saldo na conta.
        case 1:
            printf("Seu saldo atual é de: R$%d\n", balance);
            break;
        // Deposita um valor na conta do usuário.
        case 2:
            printf("Valor que deseja depositar: ");
            scanf("%d", &deposit);
            printf("Seu novo saldo é de: R$%d\n", deposit + balance);
            break;
        // Faz um saque na conta do usuário.
        case 3:
            printf("Total disponível: %d\n", balance);
            printf("Valor que deseja sacar: ");
            scanf("%d", &sake);
            if (sake > balance) {
                printf("Você não possue esse valor para sacar!\n");
            } else if (sake < 0) {
                printf("Valor invalido!");
            } else {
                printf("Saque feito com sucesso. Seu novo saldo é: R$%d.\n", balance - sake);
            }
            break;
        default:
          printf("Opção invalida.\n");
    }

}