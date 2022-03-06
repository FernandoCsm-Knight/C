#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, diferenca, pesoideal;
    char genero;

    printf("Qual o seu peso? ");
    scanf("%f", &peso);

    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    scanf("%*c");
    printf("Qual o seu sexo biologico (M/F)? ");
    scanf("%c", &genero);
    
    if(genero == 'M') {
        pesoideal = (72.7 * altura) - 58;
    } 
    
    else if(genero == 'F') {
        pesoideal = (62.1 * altura) - 44.7;
    }

    diferenca = peso - pesoideal;

    if (diferenca < 0) {
        diferenca = diferenca * -1;
    }

    printf("Seu peso ideal e: %.1f.\n", pesoideal);
    printf("Voce esta %.1fkg fora do pesoideal.\n", diferenca);

    return 0;
}