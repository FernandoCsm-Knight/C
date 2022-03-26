void compararTime(char gabarito[9], char time[20], bool pontos, bool digitouErrado, int* alunos, int* i);

void digiteTime(char time[20], int i);

void numeroDeAlunos(int* numAlunos);

void calculoDePorcentagem(int alunosCruz, int alunosAtle, int alunosOutros, int numAlunos);




void compararTime(char gabarito[9], char time[20], bool pontos, bool digitouErrado, int* alunos, int* i) {

    for(int j = 0; j < strlen(gabarito); j++) {
        pontos = time[j] == gabarito[j];
        if(!pontos) {
            printf("seu time nao e o %s, voce digitou errado, tente novamente...\n\n", gabarito);
            digitouErrado = true;
            (*i)--;
            break;
        } 
    }
    if(pontos) {
        (*alunos)++;
        printf("Seu time e o %s\n", gabarito);
    }
}

void digiteTime(char time[20], int i) {
    printf("\nAluno %d\n", i + 1);
    printf("Digite o seu time de futbol: ");
    scanf("%s", time);
    fflush(stdin);
    for(int j = 0; j < strlen(time); j++) {
        time[j] = tolower(time[j]);
    }
}

void numeroDeAlunos(int* numAlunos) {
    bool erro = false;
    do {
        printf("Digite o numero de alinos da sua turma (0 a 70): ");
        scanf("%d", numAlunos);
        fflush(stdin);
        erro = (*numAlunos) < 0 || (*numAlunos) > 70;
        if(erro) {
            printf("Voce digitou um valor invalido. Tente novamente...\n\n");
        }
    } while(erro);
}

void calculoDePorcentagem(int alunosCruz, int alunosAtle, int alunosOutros, int numAlunos) {
    float porcruz, 
          poratle, 
          poroutros;

    porcruz = ((float)alunosCruz / numAlunos) * 100;
    poratle = ((float)alunosAtle / numAlunos) * 100;
    poroutros = ((float)alunosOutros / numAlunos) * 100;

    printf("%.2f%% dos alunos sao atleticandos, %.2f%% sao cruzeirences, %.2f%% torcem pra times da casa do krl. \n\n", poratle, porcruz, poroutros);
}