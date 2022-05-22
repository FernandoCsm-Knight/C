#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SALARIO_MIN 1212.0

void leValor(double* kw);
double valorPago(double kw, double desc);

int main() {
    double kw = 0.0;
    leValor(&kw);
    printf("O valor a ser pago sem desconto eh: %.2lf\n", valorPago(kw, 0));
    printf("O valor a ser pago com desconte de 10%% eh: %.2lf\n", valorPago(kw, 0.1));
    return 0;
}

void leValor(double* kw) {
    bool erro;
    do {
        printf("Digite o numero de Kw: ");
        scanf("%lf", kw);
        fflush(stdin);
        erro = ((*kw) < 0.0);
        if(erro) printf("Valor invalido... Digite Novamente\n\n");
    } while(erro);
}

double valorPago(double kw, double desc) {
    double valorKW = SALARIO_MIN/7.0,
           multiplicador = kw/100.0;
    return (valorKW * multiplicador) * (1.0-desc);
}   