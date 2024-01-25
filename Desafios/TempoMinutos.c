#include <stdio.h>

int main() {

    int hora_inicial = 0, minuto_inicial = 0, hora_final = 0, minuto_final = 0, duracao_horas = 0, duracao_minutos = 0;

    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    int inicio_em_minutos = hora_inicial * 60 + minuto_inicial;
    int final_em_minutos = hora_final * 60 + minuto_final;

    duracao_minutos = final_em_minutos - inicio_em_minutos;

    if (duracao_minutos <= 0) {
        duracao_minutos += 24 * 60;
    }

    duracao_horas = duracao_minutos / 60;
    int duracao_em_minutos = duracao_minutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", duracao_horas, duracao_em_minutos);

    return 0;
}