#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void validacao(bool booleano, char* estadoCivil) {
    do {
        printf("Escreva qual o seu estado civil\n(C = casado)\n(S = solteiro)\n(D = divorciado)\n(V = viuvo)\n\nDigite: ");
        scanf(" %c", estadoCivil);
        (*estadoCivil) = toupper((*estadoCivil));
        booleano = ((*estadoCivil) != 'C') && ((*estadoCivil) != 'S') && ((*estadoCivil) != 'D') && ((*estadoCivil) != 'V');
        if(booleano) {
            printf("O valor digitado nao e invalido, tente novamente...\n\n");
        } else {
            printf("O valor digitado e valido.\n\n");
        }
    } while(booleano);
}

void imprimaEstado(char estadoCivil) {
    switch (estadoCivil) {
        case'C':
            printf("Seu estado civil e casado. \n");
            break;
            
        case 'S':
            printf("Seu estado civil e solteiro. \n");
            break;

        case 'D':
            printf("Seu estado civil e divorciado. \n");
            break;

        case 'V':
            printf("Seu estado civil e viuvo. \n");
            break;
    }
}

void tentarDeNovo(char* confirma, bool* refazer) {
    printf("Gostaria de alterar seu estado civil (S/N)? ");
    scanf(" %c", confirma);
    (*confirma) = toupper((*confirma));
    if ((*confirma) == 'S') {
        (*refazer) = true;
    } else {
        (*refazer) = false;
    }
}

int main() {
    bool booleano,
         refazer;
    char estadoCivil,
         confirma;

    do {
        validacao(booleano, &estadoCivil);
        imprimaEstado(estadoCivil);
        tentarDeNovo(&confirma, &refazer);
    } while(refazer);
    return 0;
}