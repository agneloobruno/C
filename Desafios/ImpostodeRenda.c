#include <stdio.h>

int main() {

    float salario = 0, parte_tributavel_1 = 0, parte_tributavel_2 = 0, faixa_4 = 0;

    scanf("%f", &salario);

    if (salario > 0 && salario <= 2000) {
        printf("Isento\n");
    } else {
        salario += - 2000;
        if (salario > 0 && salario <= 1000) {
            parte_tributavel_1 = salario * 0.08;
        } else {
            salario += - 1000;
            if (salario > 0 && salario <= 1500) {
                parte_tributavel_1 = salario * 0.08;
                salario += - 1000;
                parte_tributavel_2 = salario * 0.18;
            } else 
        }
    }
}