#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    bool flag = false,
         erro;
    int num = 0,
        maiorNum = 0,
        menorNum,
        numeroDeTermos = 0,
        amplitude = 0;

    do {
        do {
            printf("Digite um valor inteiro positivo (0 encerra): ");
            scanf("%d", &num);
            fflush(stdin);
            erro = (num < 0);
            if(erro) {
                printf("Valor invalido... Tente novamente.\n\n");
            }
        } while(erro);

        if(num == 0) {
            flag = true;
            break;
        } else {
            numeroDeTermos++;
        }

        if(num > maiorNum) {
            maiorNum = num;
        }

        switch(numeroDeTermos) {
        case 0:
            printf("Nenhum valor lido...\n\n");
            break;

        case 1:
            menorNum = num;
            break;
        
        default:
            if(num < menorNum) {
                menorNum = num;
            }
            break;
        }
    } while(!flag);

    if(numeroDeTermos > 0) {
        amplitude = maiorNum - menorNum;
        printf("Maior Termo: %d.\nMenor Termo: %d.\n", maiorNum, menorNum);
        printf("Amplitude = %d.\n", amplitude);
    }
}