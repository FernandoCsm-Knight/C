#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    char str[100];
    FILE* f;
    f = fopen("text.txt", "r+");
    if(f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    } else {
        fprintf(f, "%s\n", "Esse e um arquivo");
        fprintf(f, "%s", "Com um pouco de texto.");
        fseek(f,0,SEEK_SET);
    }

    while(!feof(f)) {
        fscanf(f, "%s\n", str);
        printf("%10s \n", str);
    }
    fclose(f);
    return 0;
}