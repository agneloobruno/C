#include <stdio.h>

int main() {
    double valor = 0;
    int notas = 0, moedas = 0;
    

    scanf("%lf", &valor);

    printf("NOTAS:\n");

    notas = (int)valor / 100;
    printf("%d nota(s) de R$ 100.00\n", notas);
    valor -= notas * 100;

    notas = (int)valor / 50;
    printf("%d nota(s) de R$ 50.00\n", notas);
    valor -= notas * 50;

    notas = (int)valor / 20;
    printf("%d nota(s) de R$ 20.00\n", notas);
    valor -= notas * 20;

    notas = (int)valor / 10;
    printf("%d nota(s) de R$ 10.00\n", notas);
    valor -= notas * 10;

    notas = (int)valor / 5;
    printf("%d nota(s) de R$ 5.00\n", notas);
    valor -= notas * 5;
     
    notas = (int)valor / 2;
    printf("%d nota(s) de R$ 2.00\n", notas);
    valor -= notas * 2;

    printf("MOEDAS:\n");

    moedas = valor / 1;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    valor -= moedas * 1;

    moedas = valor / 0.5;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    valor -= moedas * 0.5;
    
    moedas = valor / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    valor -= moedas * 0.25;

    moedas = valor / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    valor -= moedas * 0.10;

    moedas = valor / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    valor -= moedas * 0.05;

    moedas = valor / 0.01;
    printf("%d moeda(s) de R$ 0.01\n", moedas);
    valor-= moedas * 0.01;

    return 0;
}