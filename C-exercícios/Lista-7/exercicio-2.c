#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    bool erro;
    int resultado,
        num = 0,
        soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%i", &num);
        fflush(stdin);
        erro = (num < 1);
        if(erro) printf("somente valores maiores do que 0 podem ser perfeitos. \n\n");
    } while(erro);

    for(int i = 1; i <= (num/2); i++) {
        resultado = num % i;
        if(resultado == 0) {
            soma += i;
        }
    }

    if(soma == num) {
        printf("O numero e perfeito.\n");
    } else {
        printf("O numero nao e perfeito.\n");
    }

    return 0;
}