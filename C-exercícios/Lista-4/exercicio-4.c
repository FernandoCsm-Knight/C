#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 10;

    do {
        printf("%d\n", numero);
        numero--;
    } while(numero > 0);

    return 0;
}