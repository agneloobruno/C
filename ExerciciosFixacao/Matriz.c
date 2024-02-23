#include<stdio.h>

int main() 
{
    int TAM = 0;

    printf("Digite o valor da ordem das matrizes: \n");
    scanf("%d", &TAM);

    float matrizA[TAM][TAM];
    float matrizB[TAM][TAM];
    float matrizC[TAM][TAM];

    if (TAM <= 150) 
    {
        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                printf("Digite o valor de A%d%d:\n", i+1, j+1);
                scanf("%f", &matrizA[i][j]);
            }
        }

        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                printf("Digite o valor de B%d%d:\n", i+1, j+1);
                scanf("%f", &matrizB[i][j]);
            }
        }

        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
                printf("%.0f    ", matrizC[i][j]); 
            }

            printf("\n\n");
        }
    } 
    else 
    {
        printf("Valor invalido!\nDigite um valor entre 0 e 150.");
    }
}
