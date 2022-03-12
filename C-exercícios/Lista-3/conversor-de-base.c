#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num = 0;
    int limite = 0;

    printf("Digite um numero de bits: ");
    scanf("%d", &num);

    for(int i = num-1; i != 0; i--) {
        limite += pow(2, i);    
    }
    
    limite += 1;

    printf("O maior numero que pode ser representado com esse numero de bits e %d\n\n", limite);

    return 0;
}