#include <stdio.h>
#include <math.h>

int main() {
    int horaChegada, minChegada, horaSaida, minSaida;
    int tempoEstacionamento, valorPago;

    // Receber a hora e minuto de chegada
    printf("Digite a hora de chegada (formato 24 horas): ");
    scanf("%d", &horaChegada);
    printf("Digite o minuto de chegada: ");
    scanf("%d", &minChegada);

    // Receber a hora e minuto de saída
    printf("Digite a hora de saída (formato 24 horas): ");
    scanf("%d", &horaSaida);
    printf("Digite o minuto de saída: ");
    scanf("%d", &minSaida);

    // Calcular o tempo utilizado no estacionamento
    int minutosChegada = horaChegada * 60 + minChegada;
    int minutosSaida = horaSaida * 60 + minSaida;
    tempoEstacionamento = ceil((minutosSaida - minutosChegada) / 60.0);

    // Calcular o valor a ser pago
    if (tempoEstacionamento <= 2) {
        valorPago = tempoEstacionamento * 1;
    } else if (tempoEstacionamento <= 4) {
        valorPago = 2 + (tempoEstacionamento - 2) * 1.4;
    } else {
        valorPago = 4.8 + (tempoEstacionamento - 4) * 2;
    }

    // Mostrar o tempo utilizado no estacionamento e o valor a ser pago
    printf("Tempo utilizado no estacionamento: %d horas e %d minutos\n", tempoEstacionamento / 60, tempoEstacionamento % 60);
    printf("Valor a ser pago: R$ %.2f\n", valorPago);

    return 0;
}