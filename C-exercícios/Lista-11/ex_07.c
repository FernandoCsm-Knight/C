#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"
#define SIZE_ARRAY 15

void imprimeArray(const int a[], int tam);

int main() {
    system("cls");
    int num[SIZE_ARRAY] = {0};
    abertura("Coloca a Sequencia Fibonacci em um Array");
    fibonacci(num, SIZE_ARRAY);
    imprimeArray(num, SIZE_ARRAY);
    return 0;
}

void imprimeArray(const int a[], int tam) {
    printf("%s %15s\n\n", "Elemento", "Valor");
    for(int i = 0; i < tam; i++) printf("%-5i %16i\n", (i+1), a[i]);
    printf("\n");
}

void fibonacci(int a[], int tam) {
    int antecessor2 = 1, antecessor1 = 0, elemento = 0;
    for(int i = 0; i < tam; i++) {
        elemento = antecessor1 + antecessor2;
        antecessor2 = antecessor1;
        antecessor1 = elemento;
        a[i] = elemento;
    }
}