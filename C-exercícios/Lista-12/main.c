#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "utilities.h"
#define TAMANHO_MAX 20

void iniciarAmbiente(FILE* f);
void leTimes(FILE* f);
bool validaString(char* arr);
void minuscula(char a[]);
void imprimeMenu(FILE* arq);
void escreveTimes(FILE* f);
void percentualTorcedores(FILE* f, FILE* times);
void contabiliza(FILE* f, int* i, char* arquivo);
void limpaArray(int* num, int tam);

int main() {
    system("cls");
    FILE* arq;
    abertura("Menu do Usuario");
    imprimeMenu(arq);
    return 0;
}

void imprimeMenu(FILE* arq) {
    int op;
    printf("\n0 - Sair do Programa\n1 - Inicializar o Ambiente\n2 - Ler Time do Coracao\n3 - Escrever os times do coracao\n4 - Percentual de torcedores\n\n? ");
    scanf("%i", &op);
    navegacao(op, arq);
}

void navegacao(int op, FILE* f) {

    FILE* times;

    switch(op) {
        case 0:
            break;
        case 1:
            iniciarAmbiente(f);
            break;
        case 2:
            leTimes(f);
            break;
        case 3:
            escreveTimes(f);
            break;
        case 4:
            percentualTorcedores(f, times);
            break;
        default:
            printf("Ocorreu um erro de navegacao...\n\n");
            imprimeMenu(f);
    }
}

void iniciarAmbiente(FILE* f) {
    f = fopen("info.dat", "w");
    if(f == NULL) {
        printf("Erro ao abrir o arquivo...\n\n");
        exit(1);
    }
    fclose(f);
    imprimeMenu(f);
}

void leTimes(FILE* f) {
    f = fopen("info.dat", "a");
    char a[TAMANHO_MAX];
    printf("Qual o seu time: ");
    scanf("%s", a);
    minuscula(a);
    while(!validaString(a)) {
        fprintf(f, "%s\n", a);
        printf("Qual o seu time: ");
        scanf("%s", a);
    }
    fclose(f);
    imprimeMenu(f);
}

bool validaString(char arr[]) {
    char aux[] = "sair";
    bool verdadeiro = arr[0] == aux[0];
    int count = 1;
    while(verdadeiro && (count < ((int)strlen(aux)))) {
        verdadeiro = arr[count] == aux[count];
        count++;
    } return verdadeiro;
}

void minuscula(char a[]) {
    for(int i = 0; i < strlen(a); i++) a[i] = tolower(a[i]);
}

void escreveTimes(FILE* f) {
    f = fopen("info.dat", "r");
    char palavra[TAMANHO_MAX];
    abertura("Times do Coracao");
    fscanf(f, "%s", palavra);
    while(!feof(f)) {
        printf("%s\n", palavra);
        fscanf(f, "%s", palavra);
    }
    fclose(f);
    imprimeMenu(f);
}

void percentualTorcedores(FILE* f, FILE* times) {
    void gravaMatriz(char** m, FILE* f);
    void jagravei(bool* j, char array[], FILE* times);
    void gravaTime(FILE* times, char** string, int p);
    void mostraPercentual(FILE* times, int* num, int tamNum);

    int tamanho = 0;
    contabiliza(f, &tamanho, "info.dat");
    char** m;
    m = malloc(tamanho * sizeof(int));
    for(int k = 0; k < tamanho; k++) {
        m[k] = malloc(TAMANHO_MAX * sizeof(char));
    }

    gravaMatriz(m, f);

    times = fopen("times.dat", "w");
    fclose(times);

    char array[TAMANHO_MAX];
    int *num, r = 0;
    num = malloc((tamanho+1) * sizeof(int));
    limpaArray(num, (tamanho+1));
    bool jafoi = false;
    copiaString(m[0], array);
    for(int l = 1; l <= tamanho; l++) {

        if(!jafoi) {
            for(int p = 0; p < tamanho; p++) {
                if(comparaString(m[p], array)) {
                    num[r]++;
                    
                    jagravei(&jafoi, array, times);
                    if(!jafoi) gravaTime(times, m, p);
                }
                //printf("%s == %s %i %i\n", m[p], array, num[r], r);
            }
            //printf("\n");
        }

        if(l < tamanho) { 
            copiaString(m[l], array);
            jagravei(&jafoi, array, times);
        }
        
        if(!jafoi) r++;
    }
    mostraPercentual(times, num, (r+1));
    for(int o = 0; o < tamanho; o++) {
        free(m[o]);
    } free(m);
    imprimeMenu(f);
}

void mostraPercentual(FILE* times, int* num, int tamNum) {
    char time[TAMANHO_MAX];
    int tamanho;
    contabiliza(times, &tamanho, "times.dat");
    times = fopen("times.dat", "r");
    printf("\n");
    for(int i = 0; i < tamanho; i++) {
        fscanf(times, "%s", time);
        printf("%s tem %i torcedores => %.2f%%\n\n", time, num[i], (somaArray(num, tamNum) != 0)?((float)num[i]/(float)somaArray(num, tamNum) * 100): 0.0);
    }
    fclose(times);
}

void gravaTime(FILE* times, char** string, int p) {
    times = fopen("times.dat", "a");
    fprintf(times, "%s\n", string[p]); 
    fclose(times); 
}

void jagravei(bool* j, char array[], FILE* times) {
    char testada[TAMANHO_MAX] = "";
    times = fopen("times.dat", "r");
    fscanf(times, "%s", testada);
    (*j) = false;
    while(!feof(times) && !(*j)) {
        (*j) = comparaString(array, testada);
        fscanf(times, "%s", testada);
    }
    fclose(times);
}

void gravaMatriz(char** m, FILE* f) {
    int j = 0;
    f = fopen("info.dat", "r");
    fscanf(f, "%s", m[j]);
    while(!feof(f)) {
        j++;
        fscanf(f, "%s", m[j]);
    }
    fclose(f);
}

void limpaArray(int* num, int tam) {
    for(int i = 0; i < tam; i++) {
        num[i] = 0;
    } 
}

void contabiliza(FILE* f, int* i, char* arquivo) {
    (*i) = 0;
    f = fopen(arquivo, "r");
    if(f == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    char a[TAMANHO_MAX];
    fscanf(f, "%s", a);
    while(!feof(f)) {
        (*i)++;
        fscanf(f, "%s", a);
    }
    fclose(f);
}
