#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

// int mdc(int a, int b);
//int mdc(int c, int d);
int mdc(int e, int f);

int main() {
    system("cls");
    abertura("Maior Divisor Comum");
    int x, y;
    x = leInteiro();
    y = leInteiro();

    printf("O maior divisor comum a %i e %i eh: %i\n", x, y, mdc(x, y));
    return 0;
}

// int mdc(int a, int b) {
//     bool div = false;
//     int aux;
//     int i = b;
//     while(i > 0 && !div) {
//         div = (a % i == 0) && (b % i == 0);
//         if(div) aux = i;
//         i--;
//     }
//     return aux;
// }

// int mdc(int c, int d) {
//     int aux;
//     while(d > 0) {
//         aux = c % d;
//         c = d;
//         d = aux;
//     } return c;
// }

int mdc(int e, int f) { 
    if(f > 0) e = mdc(f, e % f);
    return e;
}