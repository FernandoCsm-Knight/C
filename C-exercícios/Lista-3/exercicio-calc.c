#include <stdio.h>
#include <stdlib.h>

int main() {
    char operacao;
    float num1,
          num2,
          resultado;


    printf("Digite a operacao: ");
    scanf("%f %c %f", &num1, &operacao, &num2);
    
    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado de %.2f %c %.2f e %.2f\n", num1, operacao, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado de %.2f %c %.2f e %.2f\n", num1, operacao, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado de %.2f %c %.2f e %.2f\n", num1, operacao, num2, resultado);
            break;
        case '/':
            resultado = num1 / num2;
            printf("O resultado de %.2f %c %.2f e %.2f\n", num1, operacao, num2, resultado);
            break;
        default: 
            printf("Operacao invalida.\n");
    }

    return 0;
}