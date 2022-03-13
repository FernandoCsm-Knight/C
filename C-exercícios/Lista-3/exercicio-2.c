#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo,
         continuar;

    float pesoideal;
    float altura;

    do {
        do {
            printf("Digite qual o seu sexo biologico (F/M): ");
            scanf(" %c", &sexo);

            printf("Digite qual e a sua altura: ");
            scanf("%f", &altura);

            if(sexo != 'F' && sexo != 'M') {
                printf("Valores diferentes de (F/M) nao sao aceitos como sexo.\nTente novamente");
                continue;
            } 
            else {
                break;
            }
        } while(1);

        if(sexo == 'M') {
            pesoideal = (72.7 * altura) - 58.0;
        } 
        else if(sexo == 'F') {
            pesoideal = (62.1 * altura) - 44.7;
        }

        printf("Seu peso ideal e: %.2f\n", pesoideal);

        printf("Deseja fazer outra consulta? ");
        scanf("%*c");
        scanf("%c", &continuar);

    } while(continuar == 'S');
    return 0;
}