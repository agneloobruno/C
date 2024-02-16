#include<stdio.h>
#include<string.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char possibilidade1_1[10] = {"vertebrado"}, possibilidade1_2[12] = {"invertebrado"}, possibilidade2_1[3] = {"ave"}, possibilidade2_2[8] = {"mamifero"}, possibilidade2_3[6] = {"inseto"}, possibilidade2_4[8] = {"anelideo"}, possibilidade3_1[9] = {"carnivoro"}, possibilidade3_2[7] = {"onivoro"}, possibilidade3_3[9] = {"herbivoro"}, possibilidade3_4[10] = {"hematofogo"};
    char definicao1[13], definicao2[12], definicao3[15];
    int reino, especie, alimento;

    gets(definicao1);
    fflush(stdin);

    gets(definicao2);
    fflush(stdin);

    gets(definicao3);
    fflush(stdin);

    if ((reino = strcmp(definicao1, possibilidade1_1)) == 0) {
        //vertebrado

        if ((especie = strcmp(definicao2, possibilidade2_1)) == 0) {
            //ave
            
            if ((alimento = strcmp(definicao3, possibilidade3_1)) == 0) {
                printf("aguia\n");
            }
        } else if(especie = strcmp(definicao2, possibilidade2_2) == 0) {
            //mamifero

            if(alimento = strcmp(definicao3, possibilidade3_2) == 0) {
                printf("pomba\n");
            }
        }
    } else {
        //invertebrado

    }
    

    

    return 0;
}