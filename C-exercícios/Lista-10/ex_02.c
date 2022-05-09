#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int main() {
    void lenum(float* a, const char* const cptr);
    double exponencial(float b, float e);
    system("cls");
    abertura("Exponencial Recursivo");
    float num1,
          num2;
    lenum(&num1, "Valor da base: ");
    lenum(&num2, "Valor expoente: ");
    printf("%.2f^%.2f = %.2f\n", num1, num2, exponencial(num1, num2));
    return 0;
}

void lenum(float* a, const char* const cptr) {
    bool erro; 
    do {
        printf("%s", cptr);
        scanf("%f", a);
        fflush(stdin);
        erro = *a < 0;
        if(erro) printf("Valor invalido... Digite novamente.\n\n");
    } while(erro);
}

double exponencial(float b, float e) {
    double res = 0;
    if(e == 0) res = 1;
    else if(e > 0) res = b * exponencial(b, --e);
    return res;
}

