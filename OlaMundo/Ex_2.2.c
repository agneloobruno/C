#include <stdio.h>

//Exercicio para treinamento de inserção de dados pelo teclado em C - scanf

int main() {

    int idade = 0;
    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite uma idade:\n");
    scanf("%d", &idade);

    printf("idade informada: %d.\n", idade);
}