#include<stdio.h>

int main() {
    int n, i, cont_out, cont_in = 0, x[n];

    scanf("%d", &n);

    /*
       laço de repetição para armazenar os casos de testes
       e realizar a verificação da condição lógica.
    */
    while (i < n) {
        scanf("%d", &x[i]);
        i += 1;

        if (x[i] < 10 && x[i] > 20) {
            cont_out += 1; 
        } else if (x[i] > 10 && x[i] < 20) {
            cont_in += 1;
        }
    }

    printf("%d in\n%d out\n", cont_in, cont_out);

    return 0;
    
}