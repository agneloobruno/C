#include <stdio.h>

int main() {

    int valor = 0, cont = 5, pares = 0, impares = 0, positivo = 0, negativo = 0;

    while (cont > 0) {

        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares = pares + 1;
        } else  if (valor % 2 != 0){
            impares = impares + 1;
        }

        if (valor > 0) {
            positivo = positivo + 1;
        } else if (valor < 0) {
            negativo = negativo + 1;
        }

        cont = cont - 1;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

}