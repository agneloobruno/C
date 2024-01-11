#include <stdio.h>

int main() {

    int tempo = 0, velocidade_media = 0;
    float litros = 0, distancia = 0;

    scanf("%d %d", &tempo, &velocidade_media);

    distancia = tempo * velocidade_media;

    litros = distancia / 12;

    printf("%.3f\n", litros);
}