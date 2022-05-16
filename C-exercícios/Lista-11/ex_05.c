#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const float a[], int tam);
bool verificaArray(const float a[], int tam);

int main() {
    system("cls");
    float num[] = {32.42, 93.25, 29.56, 82.25, 19.0};
    int tamanho = sizeof(num)/sizeof(num[0]);
    abertura("Verifica os Valores de um Array.");
    imprimeArray(num, tamanho);

    if(verificaArray(num, tamanho)) printf("O Array eh valido.\n\n");
    else printf("O Array nao eh valido.\n\n");
    return 0;
}

void imprimeArray(const float a[], int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i+1), a[i]);
    printf("\n");
}

bool verificaArray(const float a[], int tam) {
    bool valido = true;
    int i = 0;
    while(i < tam && valido) {
        valido = (a[i] > 0) && (a[i] < 100); 
        i++;
    } return valido;
}
