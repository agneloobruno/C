#include<stdio.h>

double quadrado(double i) {
    return i * i;
}

int main() {
    int n = 0;

    scanf("%d", &n);

    for(int i = 1; i < n + 1; i++) {
        if(i % 2 == 0){
            printf("%d^2 = %.0lf\n", i, quadrado((double)i));
        }
    }

    return 0;
}