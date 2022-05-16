#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const float a[], const int tam);
void numerosNegativos(float a[], int tam, int* g);

int main() {
    system("cls");
    float num[] = {60.0, -54.2, 73.23, -87.21, 63.8, 59.99, 29.55};
    int tamanho = sizeof(num)/sizeof(num[0]); 
    abertura("Numeros Negativos em um Array");
    imprimeArray(num, tamanho);
    int a = 0;
    numerosNegativos(num, tamanho, &a);
    printf("Numeros Negativos %4i\n\n", a);
    return 0;
}

void imprimeArray(const float a[], const int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i%tam), a[i]);
    printf("\n");
}

void numerosNegativos(float a[], int tam, int* g) {
    if(a[tam] < 0) (*g)++;
    if(tam > 0) numerosNegativos(a, --tam, g);
}