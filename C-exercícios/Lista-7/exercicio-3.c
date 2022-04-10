#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    bool erro;
    int alunos, notaAcima = 0, contador = 0;
    float nota, maiorNota = 0, menorNota, media, soma = 0;

    do {
        printf("Digite o numero de alunos: ");
        scanf("%i", &alunos);
        fflush(stdin);
        erro = alunos < 0;
        if(erro) printf("Valor invalido... O numero deve ser positivo.\n\n"); 
    } while(erro);

    while(contador < alunos) {
        do {
            printf("Digite a nota do %i aluno: ", contador + 1);
            scanf("%f", &nota);
            fflush(stdin);
            erro = (nota < 0) || (nota > 20);
            if(erro) printf("A nota deve ser de 0 e 20, digite novamente.\n\n");
        } while(erro);

        if(contador == 0) menorNota = nota;
        else if(nota < menorNota) menorNota = nota;
        if(nota > maiorNota) maiorNota = nota;
        if(nota > (20.0 * 0.6)) notaAcima++;
        soma += nota;
        contador++;
    }

    if(alunos == 0) {
        media = 0;
    } else {
        media = soma / (float)alunos;
    }

    printf("\nA maior nota foi %f.\nA menor nota foi %f.\nA media da turma foi %f.\nO numero de alunos que tiraram acima de 60%% e %i.\n", maiorNota, menorNota, media, notaAcima);

    return 0;
}