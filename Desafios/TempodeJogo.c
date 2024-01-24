#include <stdio.h>

int main() {

    int inicio = 0, fim = 0, duracao = 0;

    scanf("%d %d", &inicio, &fim);


     if (inicio < fim) {
        duracao = fim - inicio;
     } else {
        duracao = 24 - inicio + fim;
     }

     printf("O JOGO DUROU %d HORA(S)\n", duracao);

     return 0;
}