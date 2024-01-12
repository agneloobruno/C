#include <stdio.h>

int main() {

    float valor = 0;
    int cont = 0, positivo = 0;

    while (cont < 6)
    {
        scanf("%f", &valor);

        if (valor > 0)
        {
            positivo = positivo + 1;
        }

        cont = cont + 1;
    }
    
    printf("%d valores positivos\n", positivo);
}