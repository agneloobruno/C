#include <stdio.h>

int main() {

    int hora_inicial = 0, minuto_inicial = 0, hora_final = 0, minuto_final = 0, duracao_horas = 0, duracao_minutos = 0;

    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    if (hora_inicial && minuto_inicial < hora_final && minuto_final) {
        duracao_horas = ((hora_final * 60) + minuto_final) - ((hora_inicial * 60) + minuto_inicial) / 60;
    }
    else {
        duracao_horas = 24 - (((hora_final * 60) + minuto_final) + ((hora_inicial * 60) + minuto_inicial) / 60);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", duracao_horas, duracao_minutos);
}