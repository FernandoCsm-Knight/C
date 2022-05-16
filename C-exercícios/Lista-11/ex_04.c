#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const float a[], int tam);
float mediaElementos(const float a[], int tam);

int main() {
    system("cls");
    float num[] = {24.51, 65.21, 86.32, 47.39, 57.20};
    int tamanho = sizeof(num)/sizeof(num[0]);
    abertura("Calcula a Media dos Elementos de um Array");
    imprimeArray(num, tamanho);
    
    printf("%7s %16.2f\n\n","Media" ,mediaElementos(num, tamanho));
    return 0;
}

void imprimeArray(const float a[], int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i%tam), a[i]);
    printf("\n");
}

float somaElementos(const float a[], int tam) {
    float t = 0;
    for(int i  = 0; i < tam; i++) t += a[i];
    return t;
}

float mediaElementos(const float a[], int tam) {
    float somaElementos(const float a[], int tam);
    float t = somaElementos(a, tam);
    float media = 0;
    if(tam != 0) media = (t/tam);
    return media;
}