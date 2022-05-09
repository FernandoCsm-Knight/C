#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void main() { 
    void dobro(int* const a); /* Tipo Primitivo */
    system("cls");
    int x=5;
    printf("O dobro de %i ", x);
    dobro(&x);
    printf("eh igual a %i\n", x);
    return 0;
}

void dobro(int* const a) {*a = (*a) * 2;}