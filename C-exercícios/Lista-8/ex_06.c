#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "FernandoCsm.h"

int main() {
    system("cls");
    abertura("Ano bissexto!");
    printf("%i\n", bissexto(1600));
    return 0;
}