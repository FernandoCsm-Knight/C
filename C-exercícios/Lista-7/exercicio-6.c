#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    int numerador = 11,
        denominador = 101;
    float elemento, 
          soma = 0;
    const int numeroDeTermos = 10;

    for(int i = 0; i < numeroDeTermos; i++) {
        if((i % 2) == 0) {
            elemento = (float)numerador / (float)denominador;
            printf("%i / %i = %f\n", numerador, denominador, elemento);
        } else {
            elemento = (float)denominador / (float)numerador;
            printf("%i / %i = %f\n", denominador, numerador, elemento);
        }

        soma += elemento;
        numerador++;
        denominador++;
    }
    printf("O valor de H e %.8f.\n", soma);
    return 0;
}