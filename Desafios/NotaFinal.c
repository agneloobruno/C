/*A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, uma avaliação semestral e um exame final. A média das três notas mencionadas obedece aos pesos a seguir: 
    Trabalhor de Laboratório : peso 2
    Avaliação Semestral :      peso 3
    Exame final:               peso 5
Faça um programa que receba as três notas, calcule e mostre essa média ponderada do estudante.
*/

#include <stdio.h>

int main() {
    float nota1 = 0,  nota2 = 0, nota3 = 0, media = 0;

    printf("Nota - Trabalho de laboratorio:");
    scanf("%f", &nota1);

    printf("Nota - Avaliacao Semestral:");
    scanf("%f", &nota2);

    printf("Nota - Exame Final:");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5)/10;

    printf("A media do aluno foi: %.2f e ele esta ", media);

    //coloquei uma condição aqui para dizer se o aluno estará aprovado ou não.

    if(media >= 7) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}