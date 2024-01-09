#include <stdio.h>
#include <math.h>

//Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.


int main() {

    float raio = 0.0;
    double volume = 0.0;

    printf("Digite o valor do raio:");
    scanf("%f", &raio);

    volume = (4/3.0) * 3.14159 * pow(raio, 3);

    printf("VOLUME = %.3f\n", volume);

}