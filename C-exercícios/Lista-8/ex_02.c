#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "FernandoCsm.h"

int main() {
    system("cls");
    abertura("Proporcoes do quadrado!");
    printf("%.2f\n", perQuadrado(5));
    printf("%.2f\n", areaQuadrado(5));
    printf("%.2f\n", propQuadrado(5, 'v'));
    printf("%.2f\n", propQuadrado(5, 'p'));
    printf("%.2f\n", propQuadrado(5, 'a'));
    return 0;
}