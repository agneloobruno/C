#include <stdio.h>
#include <math.h>

/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B. */

int main() {

    float A = 0, B = 0, C = 0;
    double TRIANGULO = 0.0, CIRCULO = 0.0, TRAPEZIO = 0.0, QUADRADO = 0.0, RETANGULO = 0.0;

    scanf("%f %f %f", &A, &B, &C);

    TRIANGULO = (A*C)/2;
    CIRCULO = 3.14159 * pow(C, 2);
    TRAPEZIO = (A + B) * C / 2;
    QUADRADO = pow(B, 2);
    RETANGULO = A * B;

    printf("TRIANGULO: %.3f", TRIANGULO);
    printf("CIRCULO: %.3f", CIRCULO);
    printf("TRAPEZIO: %.3f", TRAPEZIO);
    printf("QUADRADO: %.3f", QUADRADO);
    printf("RETANGULO: %.3f", RETANGULO);
}