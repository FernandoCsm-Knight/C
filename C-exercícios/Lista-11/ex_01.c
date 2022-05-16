#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void trocaElemento(float a[], int tam);
void imprimeArray(float a[], int tam);

int main() {
    system("cls");
    float num[] = {20.0, 32.0, 24.21, 73.42};
    int tamanho = sizeof(num)/sizeof(num[0]);
    abertura("Troca o Ultimo pelo Primeiro Elemento");
    imprimeArray(num, tamanho);

    trocaElemento(num, tamanho);

    imprimeArray(num, tamanho);
    return 0;
}

void trocaElemento(float a[], int tam) {
    float aux = a[0];
    a[0] = a[tam-1];
    a[tam-1] = aux;
}

void imprimeArray(float a[], int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i+1), a[i]);
    printf("\n");
}