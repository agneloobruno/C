#include <stdio.h>

int main() {
    char inicio_dia[4], fim_dia[4];
    int inicio_hora, inicio_minuto, inicio_segundo;
    int fim_hora, fim_minuto, fim_segundo;
    int duracao_dias, duracao_horas, duracao_minutos, duracao_segundos;

    // Leitura da entrada
    scanf("Dia %d", &inicio_hora);
    scanf("%d : %d : %d", &inicio_minuto, &inicio_segundo, &fim_hora);
    scanf("Dia %d", &fim_minuto);
    scanf("%d : %d : %d", &fim_minuto, &fim_segundo);

    // Cálculo da diferença em segundos
    int inicio_total_segundos = inicio_segundo + inicio_minuto * 60 + inicio_hora * 3600 + (inicio_hora - 1) * 24 * 3600;
    int fim_total_segundos = fim_segundo + fim_minuto * 60 + fim_hora * 3600 + (fim_minuto - 1) * 24 * 3600;
    int diferenca_segundos = fim_total_segundos - inicio_total_segundos;

    // Cálculo da duração em dias, horas, minutos e segundos
    duracao_dias = diferenca_segundos / (24 * 3600);
    diferenca_segundos %= (24 * 3600);
    duracao_horas = diferenca_segundos / 3600;
    diferenca_segundos %= 3600;
    duracao_minutos = diferenca_segundos / 60;
    duracao_segundos = diferenca_segundos % 60;

    // Saída formatada
    printf("%d dia(s)\n", duracao_dias);
    printf("%d hora(s)\n", duracao_horas);
    printf("%d minuto(s)\n", duracao_minutos);
    printf("%d segundo(s)\n", duracao_segundos);

    return 0;
}
