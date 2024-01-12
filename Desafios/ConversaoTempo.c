#include <stdio.h>

int main() {

    int segundos = 0, resto = 0, minutos = 0,  horas = 0;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d : %d : %d", horas, minutos, segundos);
}