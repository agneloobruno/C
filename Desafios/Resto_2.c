#include<stdio.h>

int main() {
    int divisor = 0;

    scanf("%d", &divisor);

    for(int i = 1; i < 10000; i++) {

        if(i % divisor == 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}