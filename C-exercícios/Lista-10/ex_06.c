#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int main() {
    system("cls");
    abertura("Troca de Valores");
    int valores[] = {2, 1, 3, 82, 179, 23, 46};
    imprimeArray(valores, sizeof(valores));
    zeraValores(valores, sizeof(valores));
    imprimeArray(valores, sizeof(valores));
    return 0;
}

void imprimeArray(int *const Iptr, int valor) {
    valor /= sizeof(int);
    for(int i = 0; i < valor; i++) {
        printf("%5i ", Iptr[i]);
    }
    printf("\n");
}

void zeraValores(int *const ptr, int valor) {
    valor /= sizeof(int);
    for(int i = 0; i < valor; i++) {
        *(ptr + i) = 0;
    }
}