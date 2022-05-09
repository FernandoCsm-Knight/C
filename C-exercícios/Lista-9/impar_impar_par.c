#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "FernandoCsm.h"

int main() {
    system("cls");
    int impar1 = 1, par = 2;

    float frac, soma = 0;
    int num = leInteiro();

    for(int i = 1; i <= num; i++) {
        if(i % 3 == 0) {
            frac = -(1.0/(float)par);
            printf("%f\n", frac); 
            par += 2;
        } else {
            frac = 1.0/(float)impar1;
            printf("%f\n", frac); 
            impar1 += 2;
        }
        soma += frac; 
    }
    printf("\n%f\n", soma); 
    return 0;
}