#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    bool erro;
    float base = 0,
          resultado = 1;
    int expoente = -1;

    system("cls");
    do {
        printf("Digite a base e o expoente: ");
        scanf("%f %d", &base, &expoente);
        fflush(stdin);
        erro = (expoente < 0);
        if(erro) {
            printf("Valor Invalido... Digite Novamente.\n\n");
        }
    } while(erro);

    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("%.2f ^ %d = %.2f\n", base, expoente, resultado);
    return 0;
}