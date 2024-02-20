#include<stdio.h>

int main() {
    int n, cont_out = 0, cont_in = 0;

    scanf("%d", &n);

    int x[n];

    /*
       laço de repetição para armazenar os casos de testes
       e realizar a verificação da condição lógica.
    */

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        if (x[i] >= 10 && x[i] <= 20) {
            cont_in += 1; 
        } else {
            cont_out += 1;
        }
    }

    printf("%d in\n%d out\n", cont_in, cont_out);

    return 0;
    
}