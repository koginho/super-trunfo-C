#include <stdio.h>

int main() {

    // Declaração de variavel
    int idade;

    // Coleta de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Estrutura de decisão.
    // Função: Indentificar qual a faixa etaria que o usuário está.
    if (idade >= 60) {
        printf("Veinho");
    } else if (idade >= 18) {
        printf("Adultinho");
    } else if (idade >= 12) {
        printf("A dor ele sente");
    } else {
        printf("Criança");
    }

}