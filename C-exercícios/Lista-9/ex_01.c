#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

bool primosEntreSi(int primeiro, int segundo);

int main() {
    system("cls");
    int num1 = 0,
        num2 = 0;
    abertura("Primos entre si");

    num1 = leInteiro();
    num2 = leInteiro();

    if(primosEntreSi(num1, num2)) {
        printf("Os numeros %i e %i sao primos entre si. \n", num1, num2);
    } else {
        printf("Os numeros %i e %i nao sao primos entre si. \n", num1, num2);
    }
    return 0;
}

bool primosEntreSi(int primeiro, int segundo) {
    int i = 2, a;
    a = maiorValorInteiro(primeiro, segundo);
    bool naoHePrimo = false;
    while(i <= (a / 2) && !naoHePrimo) {
        naoHePrimo = (primeiro % i == 0) && (segundo % i == 0);
        i++;
    }
    return !naoHePrimo;
}

int maiorValorInteiro(int a, int b) {
    if(a > b) b = a;
    return b; 
}
