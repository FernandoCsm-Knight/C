#include <stdio.h>
#include <stdlib.h>

int sequencia (int i);

int main() {
    system("cls");
    sequencia (1);

    return 0;
}

int sequencia (int i){
    printf("%i", i);
    i++;
    if (i <= 5){
        sequencia(i);
    }
    printf("%i", --i);  
}