#include <stdio.h>
#include <math.h>

int main () {
    double A = 0, B = 0, C = 0, R1 = 0, R2 = 0;
    int delta = 0;

    delta = B * 2 - 4 * A * C;

    if (delta < 0)
    {
        printf("Impossivel calcular");
    } else {
        R1 = (-B + sqrt(delta)) / 2 * A;

        R2 = (-B - sqrt(delta)) / 2 * A;

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    
}