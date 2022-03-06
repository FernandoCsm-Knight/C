#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float pi = 3.14159;
    float raio;

    printf("Qual o raio do circulo? ");
    scanf("%f", &raio);

    if(raio < 0) {
        printf("o raio de um circulo nao pode ser menor que 0. \nTente novamente: \n");
        
        return main();
    }

    float area = pi * raio * raio;

    printf("A area de um circulo de raio = %.2f e %.2f", raio, area);

    return 0;
}