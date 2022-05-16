#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");

    double* p;
    p = malloc(3 * sizeof(double));

    //*p = 5.0; 
    *(p + 0) = 5.0;
    *(p + 1) = 10.0;
    *(p + 2) = 15.0;

    printf("%-15s %-15s %-15s\n\n%-15p %-15p %-15p\n\n%-15.2lf %-15.2lf %-15.2lf\n", "*p", "*(p + 1)", "*(p + 2)", p, (p+1), (p+2), *p, *(p + 1), *(p + 2));

    free(p);
    return 0; 
}