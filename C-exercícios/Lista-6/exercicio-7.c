#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    system("cls");
    bool erro;
    char tentarDeNovo;

    do {
        int termos = 0,
            x = 0,
            razao = 0,
            a1 = 0,
            elemento = 0,
            divisiveis = 0;

        do {
            printf("Digite o primeiro termo e a razao de uma P.A.: ");
            scanf("%i %i", &a1, &razao);
            fflush(stdin);
            erro = (razao == 0);
            if(erro) {
                printf("Valor invalido... Tente novamente.\n\n");
            }
        } while (erro);
        
        do {
            printf("Digite o numero de elementos da P.A.: ");
            scanf("%i", &termos);
            fflush(stdin);
            erro = (termos <= 0);
            if(erro) {
                printf("Valor invalido... Tente novamente.\n\n");
            }
        } while (erro);

        do {
            printf("Digite um numero x para ser divisor da P.A.: ");
            scanf("%i", &x);
            fflush(stdin);
            erro = (x == 0);
            if(erro) {
                printf("Valor invalido... Tente novamente.\n\n");
            }
        } while (erro);

        for(int i = 0; i < termos; i++) {
            elemento = a1 + (razao * i); 
            printf("A%i = %i\n", i + 1, elemento);

            if((elemento % x) == 0) {
                printf("O valor %i e divisivel por %i.\n\n", elemento, x);
                divisiveis++;
            }
        }

        printf("O numero de termos divisiveis por %d e %d.\n\n", x, divisiveis);

        do {
            printf("Deseja tentar novamente (S/N)? ");
            scanf(" %c", &tentarDeNovo);
            fflush(stdin);
            tentarDeNovo = tolower(tentarDeNovo);
            erro = (tentarDeNovo != 's') && (tentarDeNovo != 'n');
            if(erro) {
                printf("Valor invalido... Tente novamente.\n\n");
            }
        } while(erro);

    } while(tentarDeNovo == 's');

    return 0;
}