#include <stdio.h>
#include <stdlib.h>

/* a função a seguir le e converte graus Farenheit em graus celsius. */

int main() {
    float f, c;
    char conversao;

    printf("Qual a unidade do valor de entrada (C/F)? ");
    scanf("%c", &conversao);
    printf("%c\n", conversao);

    if(conversao == 'F') {
        printf("Digite o valor em Farenheit: ");
        scanf("%f", &f);

        c = (float)5/(float)9 * (f - 32);

        printf("O valor em Celsius para %.1f graus Farenheit e: %.1f", f, c);
    }

    else if(conversao == 'C') {
        printf("Digite o valor em Celcius: ");
        scanf("%f", &c);

        f = c * 1.8 + 32;

        printf("O valor em Farenheit para %.1f graus Celsius e: %.2f", c, f);
    }

    return 0;
}