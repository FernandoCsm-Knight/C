#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
    system("cls");

    char a[100];
    printf("Digite uma palavra: ");
    scanf("%s", a);
    fflush(stdin);

    char b[100];// b[2] = ' '
    int i = 0,
        size = strlen(a),
        j = size-1;

    bool naoHePalindromo = false;

    for(int c = 0; c < size; c++) {
        a[c] = toupper(a[c]);
        printf("%c", a[c]);
    }
    printf("\n");
    while(j >= 0 && !naoHePalindromo) {
        b[i] = a[j]; // b[2] = 'p'
        naoHePalindromo = (b[i] != a[i]);

        if(naoHePalindromo) {
            printf("\nNao e palindromo!\n");
        } else {
            printf("%c", b[i]);
            i++;
            j--;
        }
    }
    
    if(!naoHePalindromo) {
        printf("\nE palindromo\n");
    }

    return 0;
}
