#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    bool erro,
         flag;
    float nota,
          maiorNota = 0,
          menorNota,
          media = 0,
          soma = 0;
    int alunos = 1, 
        passou = 0;

    do {
        printf("Qual a nota do aluno (-1 encerra): ");
        scanf("%f", &nota);
        fflush(stdin);
        erro = (nota < -1) || (nota > 20);
        if(erro) printf("Valor invalido... Digite novamente. \n\n");
    } while(erro);
    if(nota == -1) flag = true;

    while(!flag) {
        if(alunos == 1) menorNota = nota;
        else if(nota < menorNota) menorNota = nota;
        
        if(nota > maiorNota) maiorNota = nota;
        if(nota > (20 * 0.6)) passou++;
        soma += nota;

        do {
            printf("Qual a nota do aluno (-1 encerra): ");
            scanf("%f", &nota);
            fflush(stdin);
            erro = (nota < -1) || (nota > 20);
            if(erro) printf("Valor invalido... Digite novamente. \n\n");
        } while(erro);
        if(nota == -1) flag = true;
        if(!flag) alunos++;
    }

    if(flag) media = soma / (float)alunos;
    printf("\nA maior nota foi %f.\nA menor nota foi %f.\nA media da turma foi %f.\nO numero de alunos que tiraram acima de 60%% e %i.\n", maiorNota, menorNota, media, passou);

    return 0;
}