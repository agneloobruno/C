#include <stdio.h>

int main() {

    int valores[5], pares = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &valores[i]);

        if(valores[i] % 2 == 0){
            pares += 1;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;
}