#include<stdio.h>

int main() {
    int X, Y, soma = 0;

    scanf("%d %d", &X, &Y);

    if (Y < X) { 
        Y += 1;
        while (Y != X) {
            if (Y % 2 != 0) {
                soma += Y;
            }
            Y += 1;
        }
    } else if (X < Y) {
        X += 1;
        while (X != Y) {
            if (X % 2 != 0) {
                soma += X;
            }
            X += 1;
        }
    }

    printf("%d\n", soma);
}