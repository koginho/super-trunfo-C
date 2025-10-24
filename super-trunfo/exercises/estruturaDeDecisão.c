#include <stdio.h>
#include <string.h>

/* **Operadores relacionais:**
- Maior que: `>`
- Menor que: `<`
- Maior ou Igual a: `>=`
- Menor ou Igual a: `<=`
- Igual a: `==`
- Diferente de: `!=`
*/

int main() { //Começo do código
    // Declarando as variáveis
    int numb1, numb2;

    // Entrada de dados
    printf("Escreva um número: ");
    scanf("%i", &numb1);

    printf("Escreva outro número: ");
    scanf("%i", &numb2);

    // Estrutura de decisão
    if(numb1 > numb2){
        printf("O número %i é maior que o número %i\n", numb1, numb2);
    }else if(numb1 == numb2) {
        printf("O número %i é igual o número %i\n", numb1, numb2);
    } else {
        printf("O número %i é menor que o número %i\n", numb1, numb2);
    }

    // Verificando se o primeiro número é par usando '%'

    if(numb1 % 2 == 0) {
        printf("%i é um número par\n", numb1);
    }else{
        printf("%i o número é impar\n", numb1);
    }
}