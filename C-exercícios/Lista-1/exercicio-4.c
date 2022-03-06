#include <stdio.h>
#include <stdlib.h>

int main() {

    float celsius;

    printf("Qual a temperatura em Celsius? ");
    scanf("%f", &celsius);

    float farenheit = celsius * 1.8 + 32;

    printf("A temperatura %.2f em Celcius equivale a temperatura %.2f em Ferenheit.", celsius, farenheit);

    return 0;
}