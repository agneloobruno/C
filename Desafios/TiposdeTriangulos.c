#include<stdio.h>

int main() {

    float a = 0, b = 0, c = 0, auxiliar = 0;

    scanf("%f %f %f", &a, &b, &c);

    if(b >= a && b >= c) {
        auxiliar = b;
        b = (a >= c) ? a : c;
        c = (a <= c) ? a : c;
        a = auxiliar;
    } else if(c >= a) {
        auxiliar = c;
        c = (c >= b) ? b : c;
        b = (b >= a) ? b : a; 
        a = auxiliar;
    } else {
        b = (c >= b) ? c : b;
        c = (c <= b) ? c : b;
    }

    printf("a: %.2f\nb: %.2f\nc: %.2f\n", a, b, c);
}