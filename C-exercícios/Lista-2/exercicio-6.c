#include <stdio.h>
#include <stdlib.h>

/* a função abaixo lê o raio r de um circulo e calcula sua área e seu perimetro */
int main() {
    float r;
    double pi, per, area;

    pi = 3.14159265;

    printf("Escreva o valou do raio de um circulo: ");
    scanf("%f", &r);

    per = 2 * pi * r;
    area = pi * (r * r);

    printf("O perimetro de uma circunferencia de raio %.1f e %.2f.\nA area de uma circunferencia de raio %.1f e %.2f.", r, per, r,area);

    return 0;
}