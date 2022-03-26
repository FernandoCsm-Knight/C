#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls");
    printf("Bem vindo as eleicoes para o diretorio academico\n\n 0 = Sair do Programa\n 1 = Chapa 1\n 2 = Chapa 2\n 3 = Voto em branco\n 4 = Votos nulos\n\n");

    bool erro,
         flag;

    float porChapa1, 
          porChapa2, 
          porEmBranco, 
          porNulo,
          vencedor;

    int voto, 
        votosChapa1 = 0, 
        votosChapa2 = 0, 
        votosEmBranco = 0, 
        votosNulos = 0,
        contador = 0;

    while(!flag) {
        do {
            printf("Voto numero %d", contador+1);
            printf("Qual o seu voto? ");
            scanf("%d", &voto);
            fflush(stdin);
            erro = (voto < 0) || (voto > 4);
            if(voto == 0) {
                flag = true;
                break;
            }
            switch(voto) {
                case 1:
                    votosChapa1++;    
                    break;
                case 2:
                    votosChapa2++;
                    break;
                case 3:
                    votosEmBranco++;
                    break;
                case 4:
                    votosNulos++;
                    break;
            }
            contador++;
        } while (erro);
        
        printf("A primeira chapa teve %d%% dos votos, a segunda chapa teve %d%% dos votos, %d%% dos votos foram nulos e %d%% em branco\n\n", votosChapa1, votosChapa2, votosEmBranco, votosNulos);

        if(flag) {
            porChapa1 = ((float)votosChapa1 / contador) * 100;
            porChapa2 = ((float)votosChapa2 / contador) * 100;
            porEmBranco = ((float)votosEmBranco / contador) * 100;
            porNulo = ((float)votosNulos / contador) * 100;

            //printf("A primeira chapa teve %.2f, a segunda chapa teve %.2f, %.2f votos foram nulos e %.2f em branco\n", porChapa1, porChapa2, porEmBranco, porNulo);

            if(votosChapa1 > votosChapa2) {
                printf("\n\tA primeira chapa ganhou a votacao!\n\n");
            } 
            else if(votosChapa1 == votosChapa2) {
                printf("\n\tHouve um empate entre as duas chapas...\n\n");
            } 
            else {
                printf("\n\tA segunda chapa ganhou a votacao!\n\n");
            }
        }
    }

    return 0;
}