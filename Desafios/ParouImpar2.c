#include<stdio.h>
#include<string.h>

int main() {
    int cont = 0;

    char result[50];
    char positivo[10] = " POSITIVE";
    char negativo[10] = " NEGATIVE";
    char par[5] = "EVEN";
    char impar [4] = "ODD";

    scanf("%d", &cont);

    int valor[cont];

    for (int i = 0; i < cont; i++) {
        scanf("%d", &valor[i]);
    }

    for (int i = 0; i < cont; i++) {
        if(valor[i] == 0) {

            printf("NULL\n");

        } else if (valor[i] % 2 == 0) {
            if (valor[i] > 0) {

                strcpy(result, par);
                strcat(result, positivo);

                printf("%s\n", result);

            } else if (valor[i] < 0) {

                strcpy(result, par);
                strcat(result, negativo);

                printf("%s\n", result);

            }
        } else if (valor[i] % 2 != 0) {
            if (valor[i] > 0) {

                strcpy(result, impar);
                strcat(result, positivo);

                printf("%s\n", result);

            } else if (valor[i] < 0) {

                strcpy(result, impar);
                strcat(result, negativo);

                printf("%s\n", result);
            }
        }
    }

    return 0;
}