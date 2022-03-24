#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int numero = 1, 
        resultado;
    
    do{
        int multiplicador = 0;
        do {
            resultado = numero * multiplicador;
            printf("%d X %d = %d\n", numero, multiplicador, resultado);
            multiplicador++;
        } while(multiplicador <= 10);
        printf("\n\n");
        numero++;
    } while(numero <= 10);
}