#include <stdio.h>

int main() {
    float valor = 0, moedas = 0, notas = 0;

    scanf("%f", &valor);

    notas = valor / 100;
    printf("%d nota(s) de R$ 100.00\n", notas);
    notas = valor % 100;

    notas = valor / 50;
    printf("%d nota(s) de R$ 50.00\n");
    notas = valor % 50;

    notas = valor / 20;
    printf("%d nota(s) de R$ 20.00\n");
    notas = valor % 20;

    notas = valor / 10;
    printf("%d nota(s) de R$ 10.00\n");
    notas = valor % 10;

    notas = valor / 5;
    printf("%d nota(s) de R$ 5.00\n");
    notas = valor % 5;
     
    notas = valor / 2;
    printf("%d nota(s) de R$ 2.00\n");
    notas = valor % 2;
}