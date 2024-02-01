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

    printf("Sexo:");
    scanf("%c", &sexo);

    printf("Salario:");
    scanf("%f", &salario);

    printf("\n");

    printf("Nome:%s\nIdade:%d\nSexo:%c\nSalario:%.2f\n", nome, idade, sexo, salario);
    
}