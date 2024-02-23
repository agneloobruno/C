#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
    int idade;
    char sexo;
    char nome[100];
} Pessoa;


int main() {
    Pessoa pessoa;

    printf("Digite o seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);
    scanf("%c");
    printf("Digite o seu sexo: [F/M]");
    scanf("%c", &pessoa.sexo);

    printf("\n\n");

    printf("Nome: %s\nIdade: %d\nSexo: %c", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}