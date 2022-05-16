#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const float a[], const int tam);
int numerosNegativos(const float a[], const int tam);

int main() {
    system("cls");
    float num[] = {60.0, -54.2, 73.23, -87.21, 63.8, 59.99};
    int tamanho = sizeof(num)/sizeof(num[0]); 
    abertura("Numeros Negativos em um Array");
    imprimeArray(num, tamanho);
    printf("Numeros Negativos %4i\n\n", numerosNegativos(num, tamanho));
    return 0;
}

void imprimeArray(const float a[], const int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i%tam), a[i]);
    printf("\n");
}

int numerosNegativos(const float a[], const int tam) {
    int t = 0;
    for(int i = 0; i < tam; i++) if(a[i] < 0) t++;
    return t;
}