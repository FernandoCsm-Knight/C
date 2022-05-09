#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "FernandoCsm.h"

int leInteiro();
float leReal();
double exponencial(float b, int e);

int main() {
    system("cls");
    abertura("Exponencial sem Math!");
    float a = leReal();
    int b = leInteiro();

    printf("%.2f^%i = %.2lf\n", a, b, exponencial(a, b));
    return 0;
}

float leReal() {
    float x;
    printf("Digite um numero real: ");
    scanf("%f", &x);
    fflush(stdin);
    return x;
}

int leInteiro() {
    bool erro;
    int y;
    do {
        printf("Digite um numero inteiro: ");
        scanf("%i", &y);
        fflush(stdin);
        erro = y < 0;
        if(erro) printf("Valor inválido... Digite novamente.\n\n");
    } while(erro);
    return y;
}

//calcula o exponencial de um número
double exponencial(float b, int e) {
    double pot = b; 
    for(int i = 1; i < e; i++) {
        pot *= b;
    } 
    if(par(e) && pot < 0) pot *= -1;
    return pot;
}