#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado;

    printf("Qual o tamanho do lado do quadrado? ");
    scanf("%d", &lado);

    int perimetro = lado*4;

    printf("O perimetro de um quadrado de lado = %d e %d.", lado, perimetro);

    return 0;
}