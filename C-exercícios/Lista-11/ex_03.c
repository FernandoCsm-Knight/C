#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const float a[], int tam);
float somaElementos(const float a[], int tam);

int main() {
    system("cls");
    float num[] = {26.49, 64.93, 85.2, 91.0, 12.32};
    int tamanho = sizeof(num)/sizeof(num[0]);
    abertura("Soma os Valores de um Array");
    imprimeArray(num, tamanho);
    printf("%7s %16.2f\n\n", "Total", somaElementos(num, tamanho));
    
    return 0;
}

float somaElementos(const float a[], int tam) {
    float t = 0;
    for(int i = 0; i < tam; i++) t += a[i];
    return t;
}

void imprimeArray(const float a[], int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i+1), a[i]);
    printf("\n");
}