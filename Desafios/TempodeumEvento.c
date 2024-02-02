#include <stdio.h>

int main() {

    int data = 0, hora = 0, minuto = 0, segundo = 0, data_final = 0, hora_final = 0, minuto_final = 0, segundo_final = 0;
    char dia[3] = "";
    char dia_final[3] = "";
    
    //Leitura do dia e da data de inicio do evento
    scanf("%[^\n]s", &dia);
    scanf("%d", &data);

    scanf("%d : %d : %d", &hora, &minuto, &segundo);

    //Leitura dos dados de fim do evento
    scanf("%[^\n]s", &dia_final);
    scanf("%d", &data_final);

    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);






}