#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

void lenum(int* a);
long int fibonacci(int termo);

int main() {
    system("cls");
    int num;
    abertura("Enesimo termo Fibonacci");
    lenum(&num);
    printf("%ld\n", fibonacci(num));
    return 0;
}

void lenum(int* a) {
    bool erro; 
    do {
        printf("Digite o termo: ");
        scanf("%i", a);
        fflush(stdin);
        erro = *a < 1;
        if(erro) printf("Valor invaldio... Digite novamente.\n\n");
    } while(erro);
}

long int fibonacci(int termo) {
    long int res;
    if(termo <= 2) res = termo-1;
    else res = fibonacci(termo-1) + fibonacci(termo-2);
    return res;
}
