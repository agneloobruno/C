#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Lê a quantidade de casos de teste
    
    for (int i = 0; i < N; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Lê os valores X e Y
        
        int soma = 0;
        int contador = 0;
        
        while (contador < Y) {
            if (X % 2 != 0) { // Se X for ímpar, adiciona X à soma
                soma += X;
                contador++;
            }
            X++; // Passa para o próximo número
        }
        
        printf("%d\n", soma); // Imprime a soma dos números ímpares consecutivos
    }
    
    return 0;
}
