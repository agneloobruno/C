#include<stdio.h>

int main() 
{
    //@param TAM define o valor de 20 para a constante
    const int TAM = 20;
    int acima_media = 0;
    float vet[TAM], media = 0;

    for(int i = 0; i < TAM; i++)
    {
        printf("Digite a nota do aluno %d:\n", i+1);
        scanf("%f", &vet[i]);

        media += vet[i]; 
    }

    media = media / TAM;

    for (int i = 0; i < TAM; i++)
    {
        if(media > vet[i])
        {
            acima_media += 1;
        }
    }

    printf("A media da turma e: %.1f\n%d alunos ficaram acima da media.\n", media, acima_media);

    return 0;
}