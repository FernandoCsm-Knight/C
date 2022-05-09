#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long fibonacci(int n);

int main() {
    system("cls");
    printf("%ld\n", fibonacci(2));
    return 0;
}

long fibonacci(int n) {
	long fib = n;
	if(n > 1) fib = fibonacci(n-1) + fibonacci(n-2);
	return fib;
}