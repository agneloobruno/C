#include <stdio.h>

int main() {

    float salario = 0, parte_tributavel_1 = 0, parte_tributavel_2 = 0;

    scanf("%f", &salario);

    if (salario > 0 && salario <= 2000) {
        printf("Isento\n");
    } else if (salario > 2000.01 && salario <= 3000) {
        salario += - 2000;
        parte_tributavel_1 = salario * 0.08;
        
    }
    printf("%.2f %.2f", parte_tributavel_1, parte_tributavel_2);
}