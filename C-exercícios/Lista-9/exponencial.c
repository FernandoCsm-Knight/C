#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double exponencial(int a, int b);

int main() {
    system("cls");
    printf("\n%.2lf\n", exponencial(2, 10));
    return 0;
}

double exponencial(int a, int b) {
    double res = 0;
    if(b == 0) res = 1;
    else if(b > 0) {
        res = a * exponencial( a, --b);
        printf("%15.2lf\n", res);
    } 
    return res;
}