#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubleSort(int* const a[], int tam);
void sort(int* e1, int* e2);

int main() {
    system("cls");
    int a[] = {10, 22, 8, 2, 30, 12, 8};
    size_t tamanho = sizeof(a)/sizeof(a[0]);
    bubleSort(a, tamanho);
    for(int i = 0; i < tamanho; i++) printf("%i ", a[i]);
    return 0;
}

void bubleSort(int* const a[], int tam) {
    for(int i = 0; i < tam-1; i++) {
        
        
        for(int i = 0; i < tam-1; i++) {
            if(a[i] > a[i + 1]) {
                sort(&a[i], &a[i+1]);
            }
        }
    }

}

void sort(int* e1, int* e2) {
    int aux = *e1;
    *e1 = *e2;
    *e2 = aux;
}