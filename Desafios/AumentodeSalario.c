#include <stdio.h>

int main() {

    float salario = 0, novo_salario = 0, reajuste = 0;
    int percentual = 0;

    scanf("%f", &salario);

    if (salario > 0 || salario <= 400) {
        novo_salario = salario + salario * 0.15;
        percentual = 15;
    } else if (salario > 400 || salario <= 800) {
        novo_salario = salario + salario * 0.12;
        percentual = 12;
    } else if (salario > 800 || salario <= 1200) {
        novo_salario = salario + salario * 0.1;
        percentual = 10;
    } else if (salario > 1200 || salario <= 2000) {
        novo_salario = salario + salario * 0.07;
        percentual = 7;
    } else if (salario > 2000) {
        novo_salario = salario + salario * 0.04;
        percentual = 4;
    }

    reajuste = novo_salario - salario;

    printf("Novo salario: %f\nReajuste ganho: %f \nEm percentual: %d %%\n", novo_salario, reajuste, percentual);

    return 0;
}