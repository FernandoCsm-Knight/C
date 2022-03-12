#include <stdio.h>
#include <stdlib.h>

int main() {
    int segundos,
        minutos;

    float horas;

    printf("Digite um valor em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = (float)minutos / 60;

    printf("O valor de %d segundos e: \n%d em minutos\n%.2fem horas.", segundos, minutos, horas);

    return 0; 
}