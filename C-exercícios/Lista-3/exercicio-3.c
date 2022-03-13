#include <stdio.h>
#include <stdlib.h>

//o código identifica se o ano digitado pelo usuário é ou não um ano bissexto
int main() {
    int ano;
    char continuar;

    do {
        printf("Digite o ano que deseja consultar: ");
        scanf("%d", &ano);

        if(ano % 100 == 0) {
            if(ano % 400 == 0) {
                printf("O ano %d e bissexto!\n", ano);
            }
            else {
                printf("O ano %d nao e bissexto...\n", ano);
            }
        } 
        else {
            if(ano % 4 == 0) {
                printf("O ano %d e bissexto!\n", ano);
            }
            else {
                printf("O ano %d nao e bissexto...\n", ano);
            }
        }

        printf("Deseja realizar outra consulta (S/N)? ");
        scanf("%*c");
        scanf("%c", &continuar);
    } while(continuar == 'S');
    return 0;
}