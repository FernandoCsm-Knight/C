#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    int termos = 0,
        antecessor1 = 0,
        antecessor2 = 1,
        elemento = 0;
    bool erro;
    printf("Sequencia de Fibonacci!\n\n");

    do {
        printf("Digite o numero de termos: ");
        scanf("%d", &termos);
        fflush(stdin);
        erro = (termos < 1);
        if(erro) {
            printf("Valor invalido... Digite novamente.\n\n");
        }
    } while(erro);

    for(int i = 0; i < termos; i++) {
        printf("Elemento A%d = %d\n", i + 1, elemento);
        antecessor1 = elemento;
        elemento = antecessor1 + antecessor2;
        antecessor2 = antecessor1;
    }

    return 0;
}