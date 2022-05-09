#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int main() {
    void leianum(int* x);
    long int fatorial(int a); /*protótipo de fatorial*/
    system("cls");
    int x;

    abertura("Fatorial Recursivo");
    leianum(&x);

    printf("%ld", fatorial(x));
    return 0;
}

long int fatorial(int a) {
    long int res = 1;
    if(a > 1) res = a * fatorial(a-1);
    return res;
}

void leianum(int* x) {
    bool erro;
    do {
        printf("Digite um valor: ");
        scanf("%i", x);
        fflush(stdin);
        erro = *x < 0;
        if(erro) printf("Valor invalido... Digite novamente.\n\n");
    } while(erro);
}