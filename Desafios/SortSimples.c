#include <stdio.h>

int main() {
    int valor1 = 0, valor2 = 0, valor3 = 0, maior = 0, inter = 0, menor = 0;

    scanf("%d %d %d", &valor1, &valor2, &valor3);

    if (valor1 > valor2 && valor1 > valor3 && valor2 > valor3){
        maior = valor1;
        inter = valor2;
        menor = valor3;
    } else if (valor2 > valor1 && valor2 > valor3 && valor1 > valor3) { 
        maior = valor2;
        inter = valor1;
        menor = valor3;
    } else if (valor3 > valor1 && valor3 > valor2 && valor2 > valor1) {
        maior = valor3;
        inter = valor2;
        menor = valor1;
    } else if (valor1 > valor2 && valor1 > valor2 && valor3 > valor2) {
        maior = valor1;
        inter = valor3;
        menor = valor2;
    } else if (valor2 > valor1 && valor2 > valor3 && valor3 > valor1) {
        maior = valor2;
        inter = valor3;
        menor = valor1;
    } else if (valor3 > valor1 && valor3 > valor2 && valor1 > valor2) {
        maior = valor3;
        inter = valor1;
        menor = valor2;
    }
    
    printf("%d\n %d\n %d\n", menor, inter, maior);
    printf("\n");
    printf("%d\n %d\n %d\n", valor1, valor2, valor3);
}