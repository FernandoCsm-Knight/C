#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_VETOR 3

int media(int* num);

int main() {
    int num[TAMANHO_VETOR];
    abertura("Media de 3 Numeros Inteiros");
    for(int j = 0; j < TAMANHO_VETOR; j++) {
        printf("Digite um numero: ");
        scanf("%i", &num[j]);
        fflush(stdin);
    }
    printf("A media de (%i + %i + %i)/3 = %i\n", num[0], num[1], num[2], media(num));
    return 0;
}

/* Funções de Média e Soma */
/* Média */
int media(int num[]) {
    int soma(int num[]);
    return soma(num)/3;
} 

/* Soma */
int soma(int num[]) {
    int soma = 0;
    for(int i = 0; i < TAMANHO_VETOR; i++) soma += num[i];
    return soma;
}

/* Funções de Abertura */

/* Abertura Asteríscos */
void astAbertura(char a[100]) {
    for(int i = 0; i < strlen(a); i++) {
        printf("*");
        if(i == (strlen(a)-1)) printf("\n");
    }
}

/* Abertura */
void abertura(char a[100]) {
    void astAbertura(char a[100]);
    astAbertura(a);
    printf("%s\n", a);
    astAbertura(a);
    printf("\n");
}