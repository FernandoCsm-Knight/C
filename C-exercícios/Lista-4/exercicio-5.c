#include <stdio.h>
#include <stdlib.h>

int main() {
    int superior,
        inferior;

    printf("Digite o limite superior: ");
    scanf("%d", &superior);

    printf("Digite o limite inferior: ");
    scanf("%d", &inferior);

    do {
        printf("%d\n", superior);
        superior--;
    } while(superior >= inferior);

    return 0;
}