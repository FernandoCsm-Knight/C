#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void teste(int a, int* b); 

int main() {
    system("cls");
    int x = 7,
        y = 2;
    teste(x, &y);
    printf("%i\n", x);
    printf("%i\n", y);

    return 0;
}

void teste(int a, int* b) {
    a = a * 2;
    *b = *b * 3;
    printf("A = %i\nB = %i\n", a, *b);
}
