#include<stdio.h>

int main() {
    int multiplicador = 0, produto = 0;

    scanf("%d", &multiplicador);

    for(int multiplicando = 1; multiplicando <= 10; multiplicando++) {
        produto = multiplicando * multiplicador;
        printf("%d x %d = %d\n", multiplicando, multiplicador, produto);
    }

    return 0;
}