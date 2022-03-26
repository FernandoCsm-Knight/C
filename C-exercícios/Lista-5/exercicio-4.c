#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    system("cls");
    int idade,
        homens = 0,
        mulheres = 0,
        maioresDeIdade = 0,
        maiorIdade = 0,
        menorIdade = 90,
        contador = 0;
    char genero;

    bool flag = false, erro = false;
    printf("\tInicio da coleta de dados!\n\n");
    while(!flag) {
        do {
            printf("\nQual o seu genero (M/F) sair = (S)? ");
            scanf(" %c", &genero);
            genero = tolower(genero);
            fflush(stdin);
            erro = (genero != 'm') && (genero != 'f') && (genero != 's');
            if(erro) {
                printf("Valor inserido e invalido. Tente novamente...\n\n");
            }
            else if(genero == 's') {
                printf("\n\tFim da Coleta.\n\n");
                flag = true;
                break;
            }
        } while(erro);

        do {
            if(!flag) {
                printf("Qual a sua idade? ");
                scanf("%d", &idade);
                fflush(stdin);
                erro = (idade < 0) || (idade > 90);
                if(erro) {
                    printf("Valor inserido e invalido. Tente novamente...\n\n");
                }
            }
        } while(erro);
        
        switch(genero) {
            case 'm':
                homens++;
                break;
            case 'f':
                mulheres++;
                break; 
        }

        if(idade > 18) {
            maioresDeIdade++;
        }

        if(idade > maiorIdade) {
            maiorIdade = idade;
        } else if(idade < menorIdade) {
            menorIdade = idade;
        }

        if(!flag) {
            contador++;
        }
    }
    float porHomens, porMulheres;

    porHomens = ((float)homens / contador) * 100;
    porMulheres = ((float)mulheres / contador) * 100;

    printf(" A sala tem %d alunos.\n A idade mais alta da sala e %d.\n A idade mais baixa da sala e %d.\n A porcentagem de homens na sala e %.2f.\n A porcentagem de mulheres na sala e %.2f.\n\n\t Fim do Programa!\n\n", contador, maiorIdade, menorIdade, porHomens, porMulheres);

    return 0;
}