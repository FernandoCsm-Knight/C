#include <stdbool.h>
#include <string.h>

double pot(float n, float e);
bool par(int n);
bool impar(int n);
bool paridade(int n, char b);
void astAbertura(char a[100]);
void abertura(char a[100]);
double soma(int q);
float perQuadrado(float l);
float areaQuadrado(float l);
float volumeCubo(float l);
float propQuadrado(float l, char t);
double areaCirculo(float r);
float leReal();
float maiorValor();
double fatorial(int valor);
bool bissexto(int ano);
float pesoIdeal(float altura, char genero);
float recFatorial(int valor);
int leInteiro();
int maiorValorInteiro(int a, int b);
bool primosEntreSi(int primeiro, int segundo);
int nfibinacci(int num1);
// int recfibinacci(int num1);

//potenciação
double pot(float n, float e) {
    double res = 1;
    for(int i = 0; i < e; i++) {
        res *= n; 
    } return res;
} 

//Identifica se o número é par ou impar
bool par(int n) {
    bool par = ((n % 2) == 0); 
    return par;
}

bool impar(int n) {
    bool impar = ((n % 2) != 0); 
    return impar;
}

bool paridade(int n, char b) {
    bool res;
    switch (b) {
    case 'p':
        res = par(n);
        break;

    case 'i':
        res = impar(n);
        break;
    
    default:
        res = -1;
    } return res;
}

//aberturas padrões para programas
void astAbertura(char a[100]) {
    for(int i = 0; i < strlen(a); i++) {
        printf("*");
        if(i == (strlen(a)-1)) printf("\n");
    }
}

void abertura(char a[100]) {
    astAbertura(a);
    printf("%s\n", a);
    astAbertura(a);
    printf("\n");
}

//Soma dos n primeiros termos
double soma(int q) {
    double num[100];
    double sum = 0;
    for(int i = 0; i < q; i++) {
        printf("A%i: ", i+1);
        scanf("%lf", &num[i]);
        sum += num[i];
    } return sum;
}

//proporções de um quadrado
float perQuadrado(float l) {
    return (l * 4);
}

float areaQuadrado(float l) {
    return (l * l);
} 

float volumeCubo(float l) {
    return (l*l*l);
}

float propQuadrado(float l, char t) {
    float prop = 0;
    switch (t) {
    case 'p':
        prop = l * 4;
        break;

    case 'a':
        prop = (l * l);
        break;

    case 'v':
        prop = (l * l * l);
        break;
    
    default:
        prop = -1;
    } return prop;
}

//calcula a area de um circulo
double areaCirculo(float r) {
    double pi = 3.14159265;
    return pi * pot(r, 2);
}

//calcular o maior dos valores lidos
float leReal() {
    bool erro;
    float num;
    int i = 1;
    do {
        printf("A%i: ", i);
        scanf("%f", &num);
        fflush(stdin);
        erro = num < 0;
        if(erro) {
            printf("Valor digitado invalido... O valor deve ser maior que 0.\n\n");
        }
        i++;
    } while(erro);
    return num;
}

float maiorValor() {
    bool flag;
    float num = leReal(), maiorNum = 0;
    flag = num == 0;
    while(!flag){
        if(num > maiorNum) {
            maiorNum = num;
        }
        num = leReal();
        flag = num == 0;
    } return maiorNum;
}

//calcula o fatorial de um numero
double fatorial(int valor) {
    double fator = 1;
    for(int i = valor; i > 0; i--) {
        fator *= i;
    }
    return fator;
}

//indentificar um ano bissexto
bool bissexto(int ano) {
    bool hebissexto = ((ano % 4) == 0);
    if(hebissexto) {
        if((ano % 100) == 0) {
            hebissexto = ((ano % 400) == 0);
        }
    } 
    return hebissexto;
}

//calcula o peso ideal de uma pessoa 
float pesoIdeal(float altura, char genero) {
    float pesoI; 
    switch (genero) {
    case 'm':
        pesoI = (72.7 * altura) - 58;
        break;
    
    case 'f':
        pesoI = (62.1 * altura) - 44.7;
        break;

    default:
        pesoI = -1;
    } return pesoI;
}

//calcula fatorial por recursão 
float recFatorial(int valor) {
    float res = valor;
    if(valor == 2) res *= 1; 
    else res *= recFatorial(valor-1);
    return res;
}

int le2inteiros() {
    int valores[2];
    bool erro;
    int num1, num2;
    do {
        printf("Digite dois valores: ");
        scanf("%i %i", &num1 , &num2);
        fflush(stdin);
        erro = (num1 < 1) || (num2 < 1);
        if(erro) printf("Valor invalido... Digite valores maiores do que zero.\n\n");
    } while(erro);
    valores[0] = num1;
    valores[1] = num2;
    return valores[2];
}

int leInteiro() {
    bool erro;
    int num1;
    do {
        printf("Digite um valor: ");
        scanf("%i", &num1);
        fflush(stdin);
        erro = (num1 < 1);
        if(erro) printf("Valor invalido... Digite um valor maior do que zero.\n\n");
    } while(erro);
    return num1;
}

int maiorValorInteiro(int a, int b) {
    int mValor = a;
    if(b >  a) mValor = b;
    return mValor;
}

bool primosEntreSi(int primeiro, int segundo) {
    int i = 2, a;
    a = maiorValorInteiro(primeiro, segundo);
    bool naoHePrimo = false; 
    while(i <= (a/2) && !naoHePrimo) {
        naoHePrimo = (primeiro % i == 0) && (segundo % i == 0);
        i++;
    }
    return !naoHePrimo;
}

int nfibinacci(int num1) {
    int antecessor = 0, preAntecessor = 1, valor = 0;
    for(int i = 1; i < num1; i++) {
        valor = antecessor + preAntecessor;
        preAntecessor = antecessor;
        antecessor = valor;
    }
    return valor;
}