#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int main() {
    void inverte (float* const a, float* const b);
    system("cls");
    abertura("Troca de Valores");
    float x = 10,
          y = 5;

    printf("%.2f %.2f\n", x, y);
    inverte(&x, &y);
    printf("%.2f %.2f\n", x, y);

    return 0;
}

void inverte (float* const a, float* const b) {
    float aux = *a;
    *a = *b;
    *b = aux;
}