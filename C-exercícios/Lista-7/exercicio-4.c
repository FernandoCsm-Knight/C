#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    bool erro;
    
    int tamanho,
        a1,
        razao,
        numTermosPares = 0;

    printf("Digite o a1 e a razao: ");
    scanf("%i %i", &a1, &razao);
    fflush(stdin);

    do {
        printf("Digite o tamanho da P.G.: ");
        scanf("%i", &tamanho);
        fflush(stdin);
        erro = (tamanho < 1);
        if(erro) printf("Valor invalido...\n\n");
    } while(erro);

    for(int i = 0; i < tamanho; i++) {
        if(a1 % 2 == 0) {
            numTermosPares++;
        }
        a1 *= razao;
    }

    printf("O numero de termos pares e %i\n", numTermosPares);
    return 0;
}