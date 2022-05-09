#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int main() {
    int leInteiroZero(char * const ptr);
    void atribuiInteiro(int * const b);
    int soma(a, b);
    
    system("cls");
    abertura("Lendo Valores");
    int a = 0, 
        b = 0;
    b = leInteiroZero("O numero deve ser maior ou igual a zero, tente novamente.\n\n");
    atribuiInteiro(&b);

    printf("%i + %i = %i\n", a, b, soma(a, b));
    return 0;
}

int leInteiroZero(char * const ptr) {
    bool erro;
    int x;
    do {
        printf("Digite um numero inteiro: ");
        scanf("%i", &x);
        fflush(stdin);
        erro = x < 0;
        if(erro) printf("%s", ptr);
    } while(erro);
    return x;
}

void atribuiInteiro(int * const b) {
    bool erro;
    do {
        printf("Digite um numero inteiro: ");
        scanf("%i", b);
        fflush(stdin);
        erro = *b < 0;
        if(erro) printf("O numero deve ser maior ou igual a zero, tente novamente.\n\n");
    } while(erro);
}

int soma(a, b) {return a + b;}