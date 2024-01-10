#include <stdio.h>

int main() {
   int distancia = 0;
   float combustivel_gasto = 0, consumo = 0;

   scanf("%d", &distancia);

   scanf("%f", &combustivel_gasto);

   consumo = distancia/combustivel_gasto;

   printf("%.3f km/l", consumo);
    
}