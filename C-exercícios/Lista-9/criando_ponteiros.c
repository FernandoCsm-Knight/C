#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
	int x = 2,
		y = 7;
	TrocaValor(&x, &y);	
	printf("A variavel x = %4i\nA variavel y = %4i", x, y);
	return 0;
}

int TrocaValor(int* x, int* y) {
	int aux = (*x);	
	(*x) = (*y);
	(*y) = aux;
}