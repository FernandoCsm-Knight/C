#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main() {
    system("cls");
    int f = 1,
        g = 2;
    float h = 3.0,
          i = 4.0;
    double j = 5.0,
           k = 6.0;
    printf("\n%12s %12s %12s %12s\n\n %11p %9i %14s %10i\n %11p %9i %14s %10i\n %11p %11.2f %13s %9i\n %11p %11.2f %13s %9i\n %11p %11.2lf %14s %8i\n %11p %11.2lf %14s %8i\n\n", "Posicao:", "Valor:", "Tipo:", "Tamanho:", &f, f, "Int", sizeof(int),&g, g, "Int", sizeof(int), &h, h, "Float", sizeof(float), &i, i, "Float", sizeof(float), &j, j, "Double", sizeof(double), &k, k, "Double", sizeof(double));

    int* y;
    int x = 10;
    y = &x;
    printf("     y em %p guarda %i e esta em %p\n\n\n", &y, *y, y);//o endereço de y guarda o endereço de x e o valor de y representa o valor de x.

    return 0;
}

