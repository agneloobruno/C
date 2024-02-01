//Faça um programa que pergunte o nome, a idade, o salario e sexo (M ou F) de uma pessoa e exiba essa informação para ele. Assuma que o nome não será maior que 100 caracteres


#include <stdio.h>

int main() {
    int idade = 0;
    float salario = 0;
    char nome[100] = "";
    char sexo = '\0';

    printf("Nome:");
    scanf("%[^\n]s", &nome);

    printf("Idade:");
    scanf("%d", &idade);

    while ((getchar()) != '\n');

    /*Nesse ponto do programa tive dificuldades nas primeiras vezes que o rodei porque quando o programa printava no console 'Sexo:' ele não esperava eu digitar o caractere e em seguida já iniciava o outro comando. Após pesquisar a causa do problema, identifiquei que seria necessário limpar o buffer por quê ao lermos diferentes tipos de dados existe a possibilidade de ficar dados residuais que atrapalham a execução do código.*/

    printf("Sexo:");
    scanf("%c", &sexo);

    printf("Salario:");
    scanf("%f", &salario);

    printf("\n");

    printf("Nome:%s\nIdade:%d\nSexo:%c\nSalario:%.2f\n", nome, idade, sexo, salario);
    
}