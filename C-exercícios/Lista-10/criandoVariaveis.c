#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    int* z;
    z = malloc(sizeof(int) * 2);
    *z = 10;
    printf("Z esta alocando %p bytes em %p\n", z, &z);    
    free(z);

    return 0;
}