#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void abertura(char a[100]);
int somaArray(int* num, int tam);
bool comparaString(char str1[], char str2[]);
int menorString(char str1[], char str2[]);
void copiaString(char array[], char copia[]);

/* Abertura */
void astAbertura(char a[100]) {
    for(int i = 0; i < strlen(a); i++) {
        printf("*");
        if(i == (strlen(a)-1)) printf("\n");
    }
}

void abertura(char a[100]) {
    void astAbertura(char a[100]);
    astAbertura(a);
    printf("%s\n", a);
    astAbertura(a);
    printf("\n");
}

/* Soma */
int somaArray(int* num, int tam) {
    int soma = 0;
    for(int i = 0; i < tam; i++) soma += num[i];
    return soma;
}

/* Comparar Strings */
bool comparaString(char str1[], char str2[]) {
    bool verdadeiro = str1[0] == str2[0];
    int i = 1;
    int menor = menorString(str1, str2);
    while(verdadeiro && (i < menor)) {
        verdadeiro = str1[i] == str2[i];
        i++;
    } return verdadeiro;
}

int menorString(char str1[], char str2[]) {
    int menor = strlen(str1);
    if(strlen(str2) < menor) menor = strlen(str2);
    return menor;
}

/* Copiar Strings */
void copiaString(char array[], char copia[]) {
    for(int i = 0; i <= strlen(array); i++) {
        if(i == strlen(array)) copia[i] = '\0';
        else copia[i] = array[i];
    }
}