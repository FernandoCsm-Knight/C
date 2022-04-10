#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    bool erro;
    int num = 0, resultado;

    do {
        printf("Digite um numero: ");
        scanf("%i", &num);
        fflush(stdin);
        erro = (num < 2);
        if(erro) printf("Valor invalido... numeros menores que 2 nao sao primos. Tente novamente.\n\n");
    } while(erro);

    for(int i = 2; i <= (num/2); i++) {
        resultado = num % i;
        if(resultado == 0) {
            printf("O numero nao e primo.\n");
            break;
        }
    }

    if(resultado != 0) {
        printf("O nunmero e primo.\n");
    }

    return 0;
}