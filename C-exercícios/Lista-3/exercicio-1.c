#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//identifica se os valores lidos podem formar um triângulo e também identifica qual o tipo do triângulo

void jogo();

int main() {
    float l1, 
          l2, 
          l3;

    char rodarnovamente;

    while(1) {
        printf("\nDigite os tres lados de um triangulo: ");
        scanf("\n%f%f%f", &l1, &l2, &l3);

        float subbc = l2 - l3;
        if(subbc < 0) {subbc *= -1;}

        int l1ok = l1 < l2 + l3 && l1 > subbc;

        if(l1ok) {
            printf("\n\nOs valores lidos formam um triangulo.\n\n");
        } else {
            printf("\n\nOs valores lidos nao formam um triangulo.\nTente novamente...\n\n");
            continue;
        }

        float maior,
              cat1,
              cat2;

        if(l1 > l2 && l1 > l3) {
            maior = l1;
            cat1 = l2;
            cat2 = l3;
        } else if(l2 > l1 && l2 > l3) {
            maior = l2;
            cat1 = l1;
            cat2 = l3;
        } else if(l3 > l1 && l3 > l2) {
            maior = l3;
            cat1 = l1;
            cat2 = l2;
        }

        if(l1 == l2 && l1 == l3) {
            printf("O triangulo e equilatero\n\n");
        }

        if(l1 == l2 || l2 == l3) {
            printf("O triangulo e isoceles\n\n");
        }

        if(l1 != l2 && l2 != l3) {
            printf("O triangulo e escaleno\n\n");
            if(maior * maior == cat1 * cat1 + cat2 * cat2) {
                printf("O triangulo e retangulo\n\n");
            }
        }

        printf("Deseja rodar o programa novamente (S/N)? ");
        scanf("%*c");
        scanf("%c", &rodarnovamente);
        
        if(rodarnovamente == 'S') {
            char jogar;
            printf("\n\nVoce quer jogar um jogo (S/N)? ");
            scanf("%*c");
            scanf("\n%c", &jogar);
            if (jogar == 'S') {
                jogo();
            }
            else {
                continue;
            }

        } else {
            break;
        }
    }

    return 0;
}


/* o código abaixo é um pequeno jogo de adivinhação, no qual o computador aleatoriza 3 números
diferentes, descobre se esses números podem ou não formar um triângulo e em seguida determinar o
tipo de triângulo formado por aquelas medidas. Por fim o computador pergunta ao usuário qual é o
tipo de triângulo que foi aleatorizado.*/

void jogo() {
    int segundos, 
        numaleatorio,
        tentativas;

    tentativas = 4;

    int lados[3];

    segundos = time(0);
    srand(segundos);
    

    for(int i = 0; i <= tentativas; i++) {

        while(1) {

            for(int a = 0; a <= 2; a++) {

                numaleatorio = rand();
                numaleatorio = numaleatorio % 50;

                lados[a] = numaleatorio;
            }
            

            printf("\n%d %d %d", lados[0], lados[1], lados[2]);

            float subbc = lados[1] - lados[2];
            if(subbc < 0) {subbc *= -1;}

            int l1ok = lados[0] < lados[1] + lados[2] && lados[0] > subbc;

            if(l1ok) {
                printf("\n\nOs valores lidos formam um triangulo.\n\n");
                break;
            } else {
                continue;
            }
        }

        float maior,
              cat1,
              cat2;

        if(lados[0] > lados[1] && lados[0] > lados[2]) {
            maior = lados[0];
            cat1 = lados[1];
            cat2 = lados[2];
        } else if(lados[1] > lados[0] && lados[1] > lados[2]) {
            maior = lados[1];
            cat1 = lados[0];
            cat2 = lados[2];
        } else if(lados[2] > lados[0] && lados[2] > lados[1]) {
            maior = lados[2];
            cat1 = lados[0];
            cat2 = lados[1];
        }

        if(lados[0] == lados[1] && lados[0] == lados[2]) {
            printf("O triangulo e equilatero\n\n");
        }

        if(lados[0] == lados[1] || lados[1] == lados[2]) {
            printf("O triangulo e isoceles\n\n");
        }

        if(lados[0] != lados[1] && lados[1] != lados[2]) {
            printf("O triangulo e escaleno\n\n");
            if(maior * maior == cat1 * cat1 + cat2 * cat2) {
               printf("O triangulo e retangulo\n\n");
            }
        }

        int resposta;
        printf("\nTentativa %d de 5\n", i + 1);
        printf("Em qual triangulo estou pensando ((1)escaleno, (2)isoceles, (3)equilatero (4)retangulo)? ");
        scanf("%d", &resposta);

        if(resposta == 1 && lados[0] != lados[1] && lados[1] != lados[2]) {
            printf("\nVoce acertou!\n");
            break;
        }

        else if(resposta == 2 && lados[0] == lados[1] || lados[1] == lados[2]) {
            printf("\nVoce acertou!\n");
            break;
        }

        else if(resposta == 3 && lados[0] == lados[1] && lados[0] == lados[2]) {
            printf("\nVoce acertou!\n");
            break;
        }

        else if(resposta == 4 && maior * maior == cat1 * cat1 + cat2 * cat2) {
            printf("\nVoce acertou!\n");
            break;
        }

        else {
            if(i < 4) {
                printf("\nVoce errou... \nTente novamente:\n");    
            }
            else {
                printf("\nVoce errou... \nAcabou o jogo\n");
            }
            continue;
        }
    }


    return 0;
}   