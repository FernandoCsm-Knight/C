#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    int denominador = 100, 
        numerador = 1, 
        termo = 0,
        soma = 0;

    bool erro;

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
        elemento = (float)numerador / abs((float)denominador);
        printf("A%d = %d / %d = %.10lf\n", i + 1, numerador, abs(denominador), elemento);
        soma += elemento;
        denominador -= 3;
    }
    printf("\nSoma dos %d primeiros termos e: %.10f\n", termo, elemento);
    return 0;
}