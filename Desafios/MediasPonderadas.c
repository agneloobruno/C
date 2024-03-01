#include<stdio.h>

int main() {
    int caso_teste = 0;
    int peso[3] = {2, 3, 5};

    scanf("%d", &caso_teste);

    double valores[caso_teste][3];

    for(int i = 0; i < caso_teste; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &valores[i][j]);
        }
    }

    for(int i = 0; i < caso_teste; i++) {

        double media = 0;
        
        for (int j = 0; j < 3; j++) {
            media += valores[i][j] * peso[j];
        }

        media /= 10;
        printf("%.1f\n", media);
    }

    return 0;
}