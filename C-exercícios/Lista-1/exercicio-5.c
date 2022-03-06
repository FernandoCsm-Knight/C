#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso;
    float altura;

    printf("Qual o seu peso em kg? ");
    scanf("%f", &peso);

    printf("Qual a sual altura em m? ");
    scanf("%f", &altura);

    if(peso < 0) {
        printf("Sua altura e seu peso devem ser maiores que 0. \nTente novamente\n");
        return main();
    }

    if(altura < 0) {
        printf("Sua altura e seu peso devem ser maiores que 0. \nTente novamente\n");
        return main();
    }

    float imc = peso / (altura * altura);

    printf("Seu IMC e %.2f. \n", imc);

    if(imc < 17) {
        printf("Voce esta muito abaxo do peso, procure atendimento medico imediato.");
    }

    else if(imc < 18.4) {
        printf("Voce esta abaixo do peso recomendado, procure um nutricionista e se alimente com mais carboidratos e proteinas.");
    }

    else if(imc < 24.9) {
        printf("Voce esta no peso ideal, mantenha se nessa faixa de peso e voce tera menos risco para o desenvolvimento de doencas cardiovasculares.");
    }

    else if(imc < 29.9) {
        printf("Voce esta levemente acima do peso recomendado, procure diminuir o tamanho das suas refeicoes.");
    }

    else if(imc < 34.9) {
        printf("Voce esta com obesidade do tipo I, voce pode ter problemas cardiovasculares, articulares e diabetes, procure um nutricionista.");
    }

    else if(imc < 40) {
        printf("Voce esta com obesidade do tipo II, isso é um risco alto para sua saúde, porcure um nutricionista.");
    }

    else if(imc >= 40) {
        printf("Voce esta com obesidade do tipo III, procure um médico e um nutricionista imediatamente, voce tem um alto rispo para AVCs e para infartos.");
    }
    return 0;
}