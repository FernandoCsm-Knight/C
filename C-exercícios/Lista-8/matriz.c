#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
    system("cls");
    int matriz[4][4];
    float soma = 0;
    int valor = 0;

    for(int h = 0; h < 4; h++) {
        int j = 0;
        while(j < 4) {
            matriz[j][h] = (valor++);
            printf("\t%i\n", matriz[j][h]);
            j++;
        }
    }

    for(int i = 0; i < 4; i++) {
        soma += matriz[i][i];
        printf("%i\n", matriz[i][i]);
    }
    printf("%.2f", soma);

}