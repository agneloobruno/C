#include <stdio.h>
#include <math.h>

int main() {

    float x1 = 0, x2 = 0, y1 = 0, y2 = 0, distancia = 0;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    distancia = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    printf("%.4f\n", distancia);
}