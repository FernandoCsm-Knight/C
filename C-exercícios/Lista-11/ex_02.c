#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const float a[], int tam);
void inverteElemento(float a[], int p1, int p2);

int main() {
    system("cls");
    float num[] = {14.9, 24.83, 82.4, 32.98, 28.0};
    int tamanho = sizeof(num)/sizeof(num[0]);
    abertura("Troca dois Elementos de um Array");
    imprimeArray(num, tamanho);
    inverteElemento(num, 2, 3);
    imprimeArray(num, tamanho);
    return 0;
}

void imprimeArray(const float a[], int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i+1), a[i]);
    
    printf("\n");
}   

void inverteElemento(float a[], int p1, int p2) {
    float aux = a[(p1-1)];
    a[(p1-1)] = a[(p2-1)];
    a[(p2-1)] = aux;
}