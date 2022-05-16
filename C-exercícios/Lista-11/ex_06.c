#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const float a[], int tam);
int contaAprovados(const float a[], int tam);

int main() {
    system("cls");
    float num[] = {60.0, 54.2, 73.23, 87.21, 63.8, 59.99};
    int tamanho = sizeof(num)/sizeof(num[0]);
    abertura("Numero de Alunso Aprovados e Reprovados");
    imprimeArray(num, tamanho);
    int aprovados = contaAprovados(num, tamanho);
    printf("%s %16s\n\n%5i %16i\n\n", "Aprovados", "Reprovados", aprovados, (tamanho - aprovados));
    return 0;
}

void imprimeArray(const float a[], int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%5i %18.2f\n", (i+1), a[i]);
    printf("\n");
}

int contaAprovados(const float a[], int tam) {
    int c = 0;
    for(int i = 0; i < tam; i++) if(a[i] >= 60) c++;
    return c;
}