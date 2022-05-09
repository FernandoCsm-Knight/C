#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int nfibinacci(int num1);

int main() {
    system("cls");
    abertura("Enesimo termo de Fibonacci");
    int num1, enesimoTermo;
    num1 = leInteiro();
    enesimoTermo = nfibinacci(num1);
    printf("O A%i da sequencia de fibonacci e %i\n", num1, enesimoTermo);
    return 0;
}

int nfibinacci(int num1) {
    int antecessor = 0, preAntecessor = 1, valor = 0;
    for(int i = 1; i < num1; i++) {
        valor = antecessor + preAntecessor;
        preAntecessor = antecessor;
        antecessor = valor;
    }
    return valor;
}
