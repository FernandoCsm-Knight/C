#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int main() {
    int mdc(int a, int b);
    system("cls");
    abertura("MDC recursivo");
    printf("%i\n", mdc(6, 2));
    return 0;
}

int mdc(int a, int b) {
    if(b > 0) mdc(b, a % b);
    return b;
}