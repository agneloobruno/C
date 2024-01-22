#include <stdio.h>

int main() {
    float A = 0, B = 0, C = 0, area = 0, perimetro = 0;

    scanf("%f %f %f", &A, &B, &C);

    if (A + B > C && B + C > A && C + A > B) {
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        area = ((A + B) * C) / 2;
        printf("Area = %.1f\n", area);
    }

}