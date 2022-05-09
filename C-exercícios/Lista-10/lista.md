
# Lista 10

**1.** Implemente e teste uma função recursiva para calcular o fatorial de um número natural qualquer, inclusive o zero. Lembre-se que, por definição, 0! é igual a 1.

**2.** Implemente e teste uma função recursiva para o cálculo da exponenciação, em que a base é um número real e o expoente um número natural, inclusive o zero. Lembre-se que, por definição, qualquer número elevado a zero é igual a 1.

**3.** Implemente e teste uma função recursiva para calcular o k-ésimo termo Fibonacci.

**4.** Analise a função abaixo para o cálculo do Maior Divisor Comum (MDC). Note ter sido utilizada a abordagem iterativa:

> int mdc(int a, int b) {
>     int r;
>     while(b != 0) {
>         r = a % b;
>         a = b;
>         b = r;
>     }
>     return a;
> }

Construa uma versão recursiva para o cálculo do MDC. Para isto, busque identificar primeiro:
- o caso base
- o caso indutivo

**5.** Implemente e teste uma função que permita fazer a troca dos valores representados entre duas variáveis paramétricas do tipo real. Construa uma função que receba duas variáveis e “zere” os valores nelas representados.

**7.** Para o problema abaixo, implemente e teste duas funções, utilizando as abordagens solicitadas:

Construa uma função que leia um número natural (inclusive o zero). Consistir o valor lido, forçando uma nova leitura caso um inteiro negativo seja lido – neste caso, exibir uma mensagem de alerta ao usuário informando-o sobre a restrição dos valores.

**a)** A função deverá retornar o valor inteiro lido;
**b)** A função não deverá retornar valor algum (função do tipo void), ao contrário, uma variável paramétrica deverá referenciar a variável explicitada no momento em que a função for evocada. Teste as duas funções acima, solucionando o seguinte problema a partir da função principal:

Ler dois números naturais e, em seguida, escrever a soma de ambos. O primeiro número deverá ser lido testando a estratégia adotada para a questão a)

O segundo número deverá ser lido testando a estratégia adotada para a questão b)

**8.** Construa uma função que dobre o valor de uma variável paramétrica. A função não deverá retornar valor algum (função do tipo void). Teste a função criada da seguinte maneira:

> int main() {
>     int x=5;
>     printf(“O dobro de %i”, x);
>     dobro(x);
>     printf(“ eh igual a %i”, x);
>     return 0;
> }