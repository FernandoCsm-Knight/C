#include <stdio.h>
#include <stdlib.h>

/* a função asseguir calcula o número aproximado de dias vividos por uma pessao a partir da leitura de sua idade */

int main() {
    int idade;
    float diasVividos;

    printf("Qual a sua idade: ");
    scanf("%i", &idade);

    diasVividos = idade * 365.25;

    printf("Voce viveu aproximadamente %.2f dias.", diasVividos);

    return 0;
}