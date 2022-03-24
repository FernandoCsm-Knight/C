#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int ano;
    bool validado,
         continuar;
    char confirmado;

    do {
        printf("Qual ano voce quer consultar? ");
        scanf(" %d", &ano);

        if(ano % 4 == 0) {
            if(ano % 100 == 0) {
                if(ano % 400 == 0) {
                    printf("o ano e bissexto\n\n");
                } else {
                    printf("o ano nao e bissexto\n\n");
                }
            } else {
                printf("O ano e bissexto. \n\n");
            }
        } else {
            printf("O ano n e bissexto. \n\n");
        }

        do {
            printf("Deseja fazer outra consulta (S/N)? ");
            scanf(" %c", &confirmado);
            continuar = (confirmado != 'S' && confirmado != 'N');
            if(continuar) {
                printf("O valor lido e invalido. Tente novamente. \n\n");
            }
        } while(continuar);

        if(confirmado == 'S') {
            validado = true;
        } else {
            validado = false;
        }
    } while(validado);
    return 0; 
}