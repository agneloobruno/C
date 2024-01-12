#include <stdio.h>

int main() {

    int dias = 0, mes = 0, anos = 0, resto = 0;

    scanf ("%d", &dias);

    anos = dias / 365;
    resto = dias % 365;

    mes = resto / 30;
    dias = resto % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);
}