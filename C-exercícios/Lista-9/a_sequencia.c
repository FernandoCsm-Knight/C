#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "FernandoCsm.h"

int main() {
    system("cls");
    int a = 2, nVezes, divEx, contador = 0;
    float b = 13.0,
          num1 = 1.0, 
          num2 = b, 
          num3 = -(1.0/(float)a),
          soma = 0;

    float vetor[3];
    vetor[0] = num1;
    vetor[1] = num2;
    vetor[2] = num3;
    nVezes = leInteiro();

    for(int i = 0; i < nVezes; i++) {
        divEx = i % 3;

        if(divEx == 0 && i != 0) {
            a *= 2;
            num1 /= 5.0;
            b = ceil(b/2);
            if(contador % 2 == 0) num2 = 1/b;
            else num2 = b;
            num3 = -(1.0/(float)a);
            vetor[0] = num1;
            vetor[1] = num2;
            vetor[2] = num3;
            contador++;
        }        
        printf("%f\n", vetor[divEx]);
        soma += vetor[divEx];
    }

    printf("%.2f", soma);
    return 0;
}