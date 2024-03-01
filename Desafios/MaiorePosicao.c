#include <stdio.h>

int main() {

    int valores[100];
    int maior_valor = 0, posicao = 0;

    for(int i = 0; i < 100; i++) {
        scanf("%d", valores[i]);
    }

    for(int i = 0; i < 100; i++) {
        if(valores[i] > maior_valor) {
            maior_valor = valores[i];
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior_valor, posicao);

}