#include <stdio.h>

int main() {
    // Declaração de variaveis.
    float temperatura, umidade;
    unsigned int estoque;
    int estoqueMinimo = 1000;
    int estoqueMaximo = 10000;

    // Coleta de dados.
    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: ");
    scanf("%f", &umidade);

    printf("Quantidade em estoque: ");
    scanf("%u", &estoque);

    // Estrutura de decisão
    // Função: Verificar se a temperatura é adequada.
    if (temperatura > 30) {
        printf("Temperatura está alta.\n");
    } else {
        printf("Temperatura está dentro dos parâmetros.\n");
    }

    // Estrutura de decisão
    // Função: Verificar se os níveis de umidade estão elevados.
    if (umidade > 50) {
        printf("Umidade elevada.\n");
    } else {
        printf("Umidade dentro do esperado.\n");
    }

    // Estrutura de decisão.
    // Função: Verificar o estoque
    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo.\n");
    } else if (estoque >= estoqueMaximo){
        printf("Estoque em capacidade maxíma.\n");
    } else {
        printf("Estoque normal.\n");
    }
}