#include <stdbool.h>

void astAbertura(char a[100]);
void abertura(char a[100]);
int leInteiro();
float leReal();

//aberturas padrões para programas
void astAbertura(char a[100]) {
    for(int i = 0; i < strlen(a); i++) {
        printf("*");
        if(i == (strlen(a)-1)) printf("\n");
    }
}

void abertura(char a[100]) {
    astAbertura(a);
    printf("%s\n", a);
    astAbertura(a);
    printf("\n");
}

//leitura de dados unitários
int leInteiro() {
    bool erro;
    int num1;
    do {
        printf("Digite um valor: ");
        scanf("%i", &num1);
        fflush(stdin);
        erro = (num1 < 0);
        if(erro) printf("Valor invalido... Digite um valor maior do que zero.\n\n");
    } while(erro);
    return num1;
}

float leReal() {
    bool erro;
    float num;
    int i = 1;
    do {
        printf("A%i: ", i);
        scanf("%f", &num);
        fflush(stdin);
        erro = num < 0;
        if(erro) {
            printf("Valor digitado invalido... O valor deve ser maior que 0.\n\n");
        }
        i++;
    } while(erro);
    return num;
}