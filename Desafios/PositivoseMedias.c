#include <stdio.h>

int main() {
    float valores[6], media = 0;
    int positivos = 0;

    for ( int i = 0; i < 6 ; i++){
        scanf("%f", &valores[i]);

        if (valores[i] > 0){
            positivos += 1;
            media += valores[i];
        }
        
    }
    media = media / positivos;    

    printf("%d valores positivos\n%.1f", positivos, media);

}