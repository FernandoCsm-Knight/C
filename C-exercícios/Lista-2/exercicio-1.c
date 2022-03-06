#include <stdio.h>
#include <stdlib.h>


//a função lê o lado de um quadrado e calcula seu 2p
int main () {
    float l, peri;

    printf("Digite o um valor real para a medida do lado de um quadrado: ");
    scanf("%f", &l);

    peri = l * 4;

    printf("\n O 2p de um quadrado de lado %.2f e %.2f.", l, peri);

    return 0;
}