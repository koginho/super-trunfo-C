#include <stdio.h>

int main() {
    int idade = 25;
    int quantidade = 100;
    float altura = 1.80;
    double peso = 90.4;
    char letra = 'A';
    char nome[20] = "luiz";

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome: ");
    scanf("%s", nome);

    printf("A idade de %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("Seu peso é %.2f\n", peso);

    return 0;
}