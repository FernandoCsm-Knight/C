#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//flags são sinalizadores vc precisa combinar com o usuário uma entrada padrão para encerrar o programa
int main() {
    system("cls");
    float nota, 
          contador,
          media,
          maiorNota,
          soma = 0;
    bool erro = false,
         flag = false;
    //obtem os valores para o calculo da media das notas da turma e para identificar qual a maior nota.
    while(!flag) {
        //lê a nota do aluno e identifica a flag.
        do {
            printf("Nota %.0f\n", contador+1);
            printf("Digite a nota do aluno (quando desejar parar digite -1): ");
            scanf("%f", &nota);
            fflush(stdin);
            if(nota == -1) {
                flag = true;
                break;
            } else {
                erro = (nota < -1) || (nota > 100);
            }
            if(erro) {
                printf("Valor invalido. Tente novamente...\n\n");
            }
        } while(erro);
        if(nota > maiorNota) {
            maiorNota = nota;
        }
        if(nota != -1) {
            contador++;
            soma += nota;
        }
    }
    //calcula a média das notas da turma e imprime o resultado no terminal
    media =  soma / contador;

    printf("A media das notas e: %.2f em 100\n", media);
    printf("A maior nota da turma e %.2f", maiorNota);
    return 0;
}