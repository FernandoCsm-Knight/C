#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("\n Dias vividos \n\n");

	int idade;

	do {
		printf("Digite sua idade em anos: ");
		scanf("%i", &idade);
		
		if(idade < 0) {
			printf("Digite um valor positivo.\n\n");
		}
		else if(idade > 150) {
			printf("Digite uma idade menor que 150.");
		}
	} while(idade < 0 || idade > 150);

	int diasvividos = idade * 365;
	printf("Numero de dias vivdos = %d", diasvividos);

	return 0;
} //fim da main();