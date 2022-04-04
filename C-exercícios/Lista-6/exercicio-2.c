#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    int denominador = 100, 
        numerador = 1, 
        termo = 0,
        soma = 0;

    bool erro, 
         par;

    double elemento;

    do {
        printf("Qual o termo desejado: ");
        scanf("%d", &termo);
        fflush(stdin);
        erro = (termo <= 0);
        if(erro) {
            printf("Valor invalido... Digite novamente.\n\n");
        }
    } while(erro);

    for(int i = 0; i < termo; i++) {
        par = ((i % 2) == 0);
        if(par) {
            elemento = (float)denominador / (float)numerador;
            printf("A%d = %d / %d = %.10lf\n", i, denominador, numerador, elemento);
        } else {
            elemento = (float)numerador / (float)denominador;
            printf("A%d = %d / %d = %.10lf\n", i + 1, numerador, denominador, elemento);
        }
        soma += elemento;
        denominador -= 3;
        numerador++;
    }
    printf("\nSoma dos %d primeiros termos e: %.10lf\n", termo, elemento);
    return 0;
}