#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include "exercicio-1.h"

int main() {
    system("cls");
    char time[20], 
         gabarito[9], 
         qualTime;

    bool pontos = false;

    int numAlunos = -1, 
        alunosAtle = 0,
        alunosCruz = 0,
        alunosOutros = 0;

    numeroDeAlunos(&numAlunos);

    for(int i = 0; i < numAlunos; i++) {
        bool digitouErrado;
        do {
            digitouErrado = false;

            digiteTime(time, i);

            qualTime = time[0];

            switch (qualTime) {
                case 'a':
                    sprintf(gabarito, "atletico");

                    compararTime(gabarito, time, pontos, digitouErrado, &alunosAtle, &i);
                    break;
                
                case 'c':
                    sprintf(gabarito, "cruzeiro");

                    compararTime(gabarito, time, pontos, digitouErrado, &alunosCruz, &i);
                    break;

                default:
                    alunosOutros++;
                    break;
            }

            printf("%d alunos sao atleticandos, %d sao cruzeirences, %d torcem pra times da casa do krl.\n\n", alunosAtle, alunosCruz, alunosOutros);
        } while (digitouErrado);
    }

    calculoDePorcentagem(alunosCruz, alunosAtle, alunosOutros, numAlunos);
    return 0;
}