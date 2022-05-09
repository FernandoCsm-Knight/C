#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "FernandoCsm.h"

int main() {
    system("cls");
    abertura("Peso Ideal de uma Pessoa");
    printf("%.2f\n", pesoIdeal(1.8, 'm'));
    return 0;
}