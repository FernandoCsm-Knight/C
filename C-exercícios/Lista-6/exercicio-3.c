#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

potencia(float base, int expoente) {
    float resultado = 1,
          elemento = 0;
    for(int i = 0; i < expoente; i++) {
        resultado *=  base;
        printf("Elemento A%d = %.2f\n", i + 1, resultado);
        elemento += resultado;
    }
    printf("\nSoma dos %d primeiros termos e: %.2f\n", expoente, elemento);
}

int main() {
    system("cls");
    float primeiroTermo = 0,
          razao = 0;

    int termos = 0;

    bool erro;

    do {
        printf("Digite o primeiro termo: ");
        scanf("%f", &primeiroTermo);
        fflush(stdin);
        erro = (primeiroTermo == 0) || (primeiroTermo == 1) || (primeiroTermo == -1);
        if(erro) {
            printf("Valor invalido... Digite novamente.\n");
        }
    } while(erro);

    do {
        printf("Digite a razao: ");
        scanf("%f", &razao);
        fflush(stdin);
        erro = (primeiroTermo == 0) || (primeiroTermo == 1) || (primeiroTermo == -1);
        if(erro) {
            printf("Valor invalido... Digite novamente.\n");
        }
    } while(erro);

    do {
        printf("Digite o numero de elementos ");
        scanf("%d", &termos);
        fflush(stdin);
        erro = (primeiroTermo <= 0);
        if(erro) {
            printf("Valor invalido... Digite novamente.\n\n");
        }
    } while(erro);
    
    potencia(razao, termos);
    return 0;
}