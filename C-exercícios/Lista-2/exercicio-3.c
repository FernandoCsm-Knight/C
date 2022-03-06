#include <stdio.h>
#include <stdlib.h>

/* a função main() calcula o valor do peso ideal de uma pessoa do gênero masculino e o módulo da diferença entre seu peso atual e seu peso ideal. Para isso a função lê o peso e a altura do usuário para, em seguida, calcular o peso ideal e o módulo da diferença.
No fim da função temos o return 0; que indica que a main() foi executada com sucesso. */
int main() {
    float peso, altura, pesoIdeal, diferencaDePeso;

    printf("Qual e o seu peso? ");
    scanf("%f", &peso);

    printf("Qual e a sua altura? ");
    scanf("%f", &altura);

    pesoIdeal = 72.7 * altura - 58.0;
        
    if(peso >= pesoIdeal) {
        diferencaDePeso = peso - pesoIdeal;
    } else {
        diferencaDePeso = pesoIdeal - peso;
    }

    printf("Seu peso idadeal e %.2f e a diferenca entre seu peso ideal e seu peso atual e %.2f.", pesoIdeal, diferencaDePeso);

    return 0;
}