#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu primeiro nome: ");
    scanf("%s", &nome);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Nome: %s - Matrícula: %d\n", nome, matricula);
    printf("Altura: %.2f - Idade: %d\n", altura, idade);
    
    return 0;
}