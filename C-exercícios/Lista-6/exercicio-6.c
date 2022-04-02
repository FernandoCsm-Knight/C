#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    bool erro;
    int num = -1, 
        resultado = 1;

    printf("Calcula um numero em fatorial!\n\n");
    do {
        printf("Digite um numero natural positivo: ");
        scanf("%d", &num);
        fflush(stdin);
        erro = (num < 0);
        if(erro) {
            printf("Valor invalido... Digite um numero natural positivo.\n\n");
        }
    } while(erro);

    if(num != 0) {

        for(int i = num; i > 0; i--) {
            resultado *= i;
            if(i == 1) {
                printf("%d ", i);
            } else {
                printf("%d X ", i); 
            }
        }
        printf("= %d\n", resultado);

    } else{
        printf("0! = 1");
    }

    return 0;
}