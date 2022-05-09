#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

float NovoSalario(float salario, float aumento);
double leNumero(char mensagem[], char mensagemErro[], float valorErro);

int main() {
    system("cls");
    float salario,
          aumento;
    
    salario = leNumero("Salario atual do funcionario: ", "Digite um numero maior que zero", 0);
    aumento = leNumero("Aumento salarial: ", "Digite um numero maior que zero", 0);
    
    printf("O novo salario do funcionario eh: R$%.2f\n", NovoSalario(salario, aumento));
    return 0;
}

float NovoSalario(float salario, float aumento) {
    float nSalario = salario * aumento;
    return nSalario;
}

double leNumero(char mensagem[], char mensagemErro[], float valorErro) {
    bool erro;
    double numero;
    do {
        printf("%s", mensagem);
        scanf("%lf", &numero);
        fflush(stdin);
        erro = numero <= valorErro;
        if(erro) printf("%s\n\n", mensagemErro);
    } while(erro);
    return numero;
}