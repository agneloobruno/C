#include <stdio.h>
#include <math.h>

int main() {

    float a = 0, b = 0, c = 0, auxiliar = 0;

    scanf("%f %f %f", &a, &b, &c);

    //bloco usado para ordenar os valores em ordem decrescente;
    if(b >= a && b >= c) {
        auxiliar = b;
        b = (a >= c) ? a : c;
        c = (a <= c) ? a : c;
        a = auxiliar;
    } else if(c >= a) {
        auxiliar = c;
        c = (b >= a) ? a : b;
        b = (b >= a) ? b : a; 
        a = auxiliar;
    } else {
        b = (c >= b) ? c : b;
        c = (c <= b) ? c : b;
    }

    printf("a: %.2f\nb: %.2f\nc: %.2f\n", a, b, c);

    //bloco usado para determinar qual tipo de triangulo os três valores informados formam;
    if(a >= b + c) {

        printf("NAO FORMA TRIANGULO\n"); 

    } else if(pow(a, 2) == (pow(b, 2) + pow(c, 2))) {

        printf("TRIANGULO RETANGULO\n");

        if(a == b && b == c) {

            printf("TRIANGULO EQUILATERO\n");

        } else if((a == b && b != c) || (b == c && a != c) || (a == c && a != b)) {

            printf("TRIANGULO ISOSCELES\n");

        } 
    } else if(pow(a, 2) > (pow(b, 2) + pow(c, 2))) {

        printf("TRIANGULO OBTUSANGULO\n");

        if(a == b && b == c) {

            printf("TRIANGULO EQUILATERO\n");

        } else if((a == b && b != c) || (b == c && a != c) || (a == c && a != b)) {

            printf("TRIANGULO ISOSCELES\n");

        }
    } else if (pow(a, 2) < (pow(b, 2) + pow(c, 2))) {

        printf("TRIANGULO ACUTANGULO\n");

        if(a == b && b == c) {

            printf("TRIANGULO EQUILATERO\n");

        } else if((a == b && b != c) || (b == c && a != c) || (a == c && a != b)) {

            printf("TRIANGULO ISOSCELES\n");

        }
    }

    return 0;
}