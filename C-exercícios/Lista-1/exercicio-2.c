#include <stdio.h>
#include <stdlib.h>

int main() {

    int lado;

    printf("Qual o lado do quadrado? ");
    scanf("%d", &lado);

    if(lado < 0) {
        printf("O lado do quadrado nao pode ser um numero negativo. \nTente novamente: \n");
        return main();
    }

    int perimetro = lado*4;
    
    printf("O perimetro de um quadrado de lado %d e %d", lado, perimetro);

    return 0;
}