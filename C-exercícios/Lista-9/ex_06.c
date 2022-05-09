#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilities.h"

double leNota(char mensagem[], char mensagemErro[]);
bool AlunoPassou(float nota);

int main() {
    system("cls");
    float nota = leNota("Digite a nota do aluno: ", "Digite um valor maior ou igual a zero");
    if(AlunoPassou(nota)) printf("O aluno passou!\n");
    else printf("O aluno reprovou...");
    return 0;
}

double leNota(char mensagem[], char mensagemErro[]) {
    bool erro;
    double numero;
    do {
        printf("%s", mensagem);
        scanf("%lf", &numero);
        fflush(stdin);
        erro = numero < 0 || numero > 100;
        if(erro) printf("%s\n\n", mensagemErro);
    } while(erro);
    return numero;
}

bool AlunoPassou(float nota) {
    return nota > 60;
} 