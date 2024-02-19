#include<stdio.h>
#include<string.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char definicao1[13], definicao2[12], definicao3[15];
    int reino, especie, alimento;

    gets(definicao1);
    fflush(stdin);

    gets(definicao2);
    fflush(stdin);

    gets(definicao3);
    fflush(stdin);

    if(strcmp(definicao1, "vertebrado") == 0) {
        if(strcmp(definicao2, "ave") == 0) {
            if(strcmp(definicao3, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(definicao3, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(definicao2, "mamifero") == 0) {
            if(strcmp(definicao3, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(definicao3, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(definicao1, "invertebrado") == 0) {
        if(strcmp(definicao2, "inseto") == 0) {
            if(strcmp(definicao3, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(definicao3, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(definicao2, "anelideo") == 0) {
            if (strcmp(definicao3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(definicao3, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }
    

    

    return 0;
}