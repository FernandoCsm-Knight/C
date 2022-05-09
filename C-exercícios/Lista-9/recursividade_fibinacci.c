#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "FernandoCsm.h"

int RecFibonacci(int i);

int main() {
    system("cls");
    int num;
    num = leInteiro();

    printf("O valor do termo %i na sequencia de fibonacci e: %i", num, RecFibonacci(num));
    return 0;
}

int RecFibonacci(int i) {
    int res;
    if(i == 1) res = 0;
    else if(i == 2) res = 1;
    else res = RecFibonacci(i-1) + RecFibonacci(i-2); 

    return res;
}
