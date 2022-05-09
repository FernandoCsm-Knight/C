#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

bool EhPrimo(int num);

int main() {
    system("cls");

    int num = leInteiro();

    if(EhPrimo(num)) printf("O numero %i eh primo\n", num);
    else printf("O numero %i nao eh primo.\n", num);

    return 0;
}

bool EhPrimo(int num) {
    bool primo = true;
    int i = 2;
    while(i <= (num/2) && primo) {
        primo = num % i != 0;
        i++;
    } return primo;
}