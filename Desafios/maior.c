#include <stdio.h>

/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:*/

int main() {

    int A = 0, B = 0, C = 0, MAIOR = 0;

    scanf("%d %d %d", &A, &B, &C);
    
    if (A > B) {
        MAIOR = A;
    } 
    else {
        MAIOR = B;
    }
    if (MAIOR < C) {
        MAIOR = C;
    }

    printf("%d eh o maior", MAIOR);
}