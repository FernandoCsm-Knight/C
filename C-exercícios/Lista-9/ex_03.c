#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

int IdentMaxDiv(int num);

int main() {
    system("cls");
    int num;
    num = leInteiro();

    printf("O maior divisor de %i eh %i\n", num, IdentMaxDiv(num));
    return 0;
}

int IdentMaxDiv(int num) {  
    bool maxDiv = false;
    int i = (num/2); 
    while((i > 1) && !maxDiv) {
        maxDiv = ((num % i) == 0);
        if(!maxDiv) i--;
    } return i;
}