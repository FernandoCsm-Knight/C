#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void imprimeArray(const int a[], const int tam);
void leIdade(int a[], int* const i);
float mediaElementos(int a[], const int tam);

int main() {
    system("cls");
    int idades[] = {0}, i = 0;
    abertura("Calcula a Media das Idades da Turma");
    leIdade(idades, &i);
    imprimeArray(idades, ++i);
    float media = mediaElementos(idades, i);
    printf("Media %18.2f\n\n", media);
    return 0;
}

void imprimeArray(const int a[], const int tam) {
    printf("\n%s %15s\n\n", "Elemento", "Valor");
    for(int j = 0; j < tam; j++) printf("%-5i %16i\n", (j+1), a[j]);
    printf("\n");
}

void leIdade(int a[], int* const i) {
    int idade = leInteiro();
    bool flag = idade == 0;

    while(!flag) {
        a[(*i)] = idade;
        idade = leInteiro();
        flag = idade == 0;
        if(!flag) {
            a[(*i)+1] = malloc(sizeof(int));
            a[(*i)+1] = 0;
            (*i)++;
        }
    } 
}

float mediaElementos(int a[], const int tam) {
    float somaElementos(int a[], const int tam);
    float t = somaElementos(a, tam);
    float media = 0;
    if(tam != 0) media = (t/tam);
    return media;
}

float somaElementos(int a[], const int tam) {
    float t = 0;
    for(int i  = 0; i < tam; i++) t += a[i];
    return t;
}