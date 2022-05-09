#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "FernandoCsm.h"

int main() {
    system("cls");
    abertura("Teste de Paridade!");
    printf("%i\n", par(5));
    printf("%i\n", impar(5));
    printf("%i\n", paridade(5, 'i'));
    printf("%i\n", paridade(5, 'p'));
    return 0;
}